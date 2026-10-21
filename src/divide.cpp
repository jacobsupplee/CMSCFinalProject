//Project 2: divide.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Divide class.

#include <stdexcept>
#include "divide.h"

Divide::Divide(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Divide::evaluate() {
    double numerator = left->evaluate();
    double denominator = right->evaluate();

    if (denominator == 0.0)
        throw std::runtime_error("Division by zero");

    return numerator / denominator;
}