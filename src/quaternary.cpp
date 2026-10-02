//Project 2: quaternary.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Quaternary class

#include "quaternary.h"

Quaternary::Quaternary(Expression* condition, Expression* negative, Expression* zero, Expression* positive) {
    this->condition = condition;
    this->negative = negative;
    this->zero = zero;
    this->positive = positive;
}

double Quaternary::evaluate() {
    double value = condition->evaluate();
    if (value < 0)
        return negative->evaluate();
    if (value == 0)
        return zero->evaluate();
    return positive->evaluate();
}