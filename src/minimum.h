//Project 2: minimum.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Minimum class - determines the smallest of two expressions

#ifndef MINIMUM_H
#define MINIMUM_H
#include "subexpression.h"

class Minimum : public SubExpression {
public:
    Minimum(Expression* left, Expression* right);
    double evaluate();
};

#endif