//Project 2: minimum.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Minimum class

#include "minimum.h"

Minimum::Minimum(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Minimum::evaluate() {
    double leftValue = left->evaluate();
    double rightValue = right->evaluate();
    if (leftValue < rightValue)
        return leftValue;
    else
        return rightValue;
}