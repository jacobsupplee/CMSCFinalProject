//Project 2: quaternary.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Quaternary class - evaluates a conditional expression w/ four operands

#ifndef QUATERNARY_H
#define QUATERNARY_H
#include "expression.h"

class Quaternary : public Expression {
public:
    Quaternary(Expression* condition, Expression* negative, Expression* zero, Expression* positive);
    double evaluate();
private:
    Expression* condition; // Stores the condition expression
    Expression* negative;  // Stores the expression used when condition is negative
    Expression* zero;      // Stores the expression used when condition is zero
    Expression* positive;  // Stores the expression used when condition is positive
};

#endif