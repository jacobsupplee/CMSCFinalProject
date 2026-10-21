// CMSC 330 Advanced Programming Languages
// Project 2: subexpression.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

//Student addition: all ten additional operators added to file 

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
//Below: new files
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
    Expression* left;
    Expression* right;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;

    //Negation
    if (operation == '~') {
        in >> paren;
        return new Negation(left);
    }

    //Ternary operation
    if (operation == '?') {
        Expression* trueExpression = Operand::parse(in);
        Expression* falseExpression = Operand::parse(in);
        in >> paren;
        return new Ternary(left, trueExpression, falseExpression);
    }

    // Quaternary operation
    if (operation == '#') {
        Expression* negative = Operand::parse(in);
        Expression* zero = Operand::parse(in);
        Expression* positive = Operand::parse(in);
        in >> paren;
        return new Quaternary(left, negative, zero, positive);
    }

    //Binary operators
    right = Operand::parse(in);
    in >> paren;

    switch (operation) {
        case '+':
            return new Plus(left, right);

        case '-':
            return new Minus(left, right);

        case '*':
            return new Multiply(left, right);

        case '/':
            return new Divide(left, right);

        case '%':
            return new Modulus(left, right);

        case '^':
            return new Power(left, right);

        case '<':
            return new Minimum(left, right);

        case '>':
            return new Maximum(left, right);

        case '&':
            return new Average(left, right);
    }

    return 0;
}
