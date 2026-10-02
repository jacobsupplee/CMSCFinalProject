//Project 2: divide.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Divide class - evaluates the quotient of two expressions.

#ifndef DIVIDE_H
#define DIVIDE_H
#include "subexpression.h"

class Divide : public SubExpression {
public:
    Divide(Expression* left, Expression* right);
    double evaluate();
};

#endif