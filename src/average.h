//Project 2: average.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Average class - calculates average of two expressions.

#ifndef AVERAGE_H
#define AVERAGE_H
#include "subexpression.h"

class Average : public SubExpression {
public:
    Average(Expression* left, Expression* right);
    double evaluate();
};

#endif
