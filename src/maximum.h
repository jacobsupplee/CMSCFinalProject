//Project 2: maximum.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Maximum class - determines the largest of two expressions

#ifndef MAXIMUM_H
#define MAXIMUM_H
#include "subexpression.h"

class Maximum : public SubExpression {
public:
    Maximum(Expression* left, Expression* right);
    double evaluate();
};

#endif