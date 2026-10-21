// CMSC 330 Advanced Programming Languages
// Project 2: operand.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// Parses an operand as a literal, nested expression, or variable.

#include <cctype>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& in) {
    char paren;
    double value;

    in >> ws;
    int next = in.peek();

    if (next == char_traits<char>::eof())
        throw runtime_error("Expected an operand");

    if (isdigit(static_cast<unsigned char>(next)) || next == '.') {
        if (!(in >> value))
            throw runtime_error("Invalid numeric literal");
        return new Literal(value);
    }

    if (next == '(') {
        in >> paren;
        return SubExpression::parse(in);
    }

    string name = parseName(in);
    if (name.empty())
        throw runtime_error("Invalid operand");

    return new Variable(name);
}
