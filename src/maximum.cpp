//Project 2: maximum.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Maximum class

#include "maximum.h"

Maximum::Maximum(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Maximum::evaluate() {
    double leftValue = left->evaluate();
    double rightValue = right->evaluate();
    if (leftValue > rightValue)
        return leftValue;
    else
        return rightValue;
}