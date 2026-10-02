//Project 2: multiply.h file 
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Multiply class - evaluates the product of two expressions.

#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "subexpression.h"

class Multiply : public SubExpression {
public:
    Multiply(Expression* left, Expression* right);
    double evaluate();
};

#endif