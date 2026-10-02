//Project 2: modulus.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Modulus class - evaluates the remainder of two expressions.

#ifndef MODULUS_H
#define MODULUS_H
#include "subexpression.h"

class Modulus : public SubExpression {
public:
    Modulus(Expression* left, Expression* right);
    double evaluate();
};

#endif