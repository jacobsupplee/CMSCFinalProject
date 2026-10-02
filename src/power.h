//Project 2: power.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Power class - evaluates one expression raised to the power of another

#ifndef POWER_H
#define POWER_H
#include "subexpression.h"

class Power : public SubExpression {
public:
    Power(Expression* left, Expression* right);
    double evaluate();
};

#endif