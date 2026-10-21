// CMSC 330 Advanced Programming Languages
// Project 2: subexpression.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// This file contains the body of the functions contained in the SubExpression class.

#include <memory>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "modulus.h"
#include "power.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"
#include "negation.h"
#include "ternary.h"
#include "quaternary.h"

SubExpression::SubExpression(Expression* left, Expression* right)
    : left(left), right(right) {
}

Expression* SubExpression::parse(stringstream& in) {
    char operation;

    auto expectClosingParen = [&in]() {
        char paren;
        if (!(in >> paren) || paren != ')')
            throw runtime_error("Expected closing parenthesis");
    };

    unique_ptr<Expression> left(Operand::parse(in));

    if (!(in >> operation))
        throw runtime_error("Expected an operator");

    if (operation == '~') {
        expectClosingParen();
        return new Negation(left.release());
    }

    if (operation == '?') {
        unique_ptr<Expression> trueExpression(Operand::parse(in));
        unique_ptr<Expression> falseExpression(Operand::parse(in));
        expectClosingParen();
        return new Ternary(left.release(), trueExpression.release(), falseExpression.release());
    }

    if (operation == '#') {
        unique_ptr<Expression> negative(Operand::parse(in));
        unique_ptr<Expression> zero(Operand::parse(in));
        unique_ptr<Expression> positive(Operand::parse(in));
        expectClosingParen();
        return new Quaternary(left.release(), negative.release(), zero.release(), positive.release());
    }

    switch (operation) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
        case '<':
        case '>':
        case '&':
            break;
        default:
            throw runtime_error(string("Unknown operator: ") + operation);
    }

    unique_ptr<Expression> right(Operand::parse(in));
    expectClosingParen();

    switch (operation) {
        case '+':
            return new Plus(left.release(), right.release());
        case '-':
            return new Minus(left.release(), right.release());
        case '*':
            return new Multiply(left.release(), right.release());
        case '/':
            return new Divide(left.release(), right.release());
        case '%':
            return new Modulus(left.release(), right.release());
        case '^':
            return new Power(left.release(), right.release());
        case '<':
            return new Minimum(left.release(), right.release());
        case '>':
            return new Maximum(left.release(), right.release());
        case '&':
            return new Average(left.release(), right.release());
    }

    throw runtime_error("Invalid expression");
}
