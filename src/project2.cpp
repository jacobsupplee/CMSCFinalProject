// CMSC 330 Advanced Programming Languages
// Project 2: project2.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// Reads, parses, and evaluates expressions and their variable assignments.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <memory>
#include <stdexcept>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"
#include "variableException.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main() {
    const int SIZE = 256;
    unique_ptr<Expression> expression;
    char paren, comma, line[SIZE];

    ifstream fin("input.txt");
    if (!fin.is_open()) {
        cout << "File did not open" << endl;
        system("pause");
        return 1;
    }

    while (true) {
        fin.getline(line, SIZE);
        if (!fin)
            break;

        stringstream in(line, ios_base::in);
        cout << line << " ";
        symbolTable.clear();

        try {
            if (!(in >> paren) || paren != '(')
                throw runtime_error("Expected opening parenthesis");

            expression.reset(SubExpression::parse(in));

            if (!(in >> comma) || comma != ',')
                throw runtime_error("Expected ',' before variable assignments");

            parseAssignments(in);
            cout << "Value = " << expression->evaluate() << endl;
        }
        catch (const VariableException& exception) {
            cout << exception.what() << endl;
        }
        catch (const exception& error) {
            cout << "Invalid input: " << error.what() << endl;
        }
    }

    system("pause");
    return 0;
}

void parseAssignments(stringstream& in) {
    while (true) {
        string variable = parseName(in);
        if (variable.empty())
            throw runtime_error("Expected variable name in assignment");

        char assignop, delimiter;
        double value;

        if (!(in >> ws >> assignop) || assignop != '=')
            throw runtime_error("Expected '=' after variable " + variable);

        if (!(in >> value))
            throw runtime_error("Invalid numeric value for variable " + variable);

        if (!(in >> ws >> delimiter))
            throw runtime_error("Expected ',' or ';' after assignment");

        symbolTable.insert(variable, value);

        if (delimiter == ';')
            return;
        if (delimiter != ',')
            throw runtime_error("Expected ',' or ';' after assignment");
    }
}
