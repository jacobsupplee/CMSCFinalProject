//Project 2: power.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Power class; utilizes power function of cmath
#include "power.h"
#include <cmath>

Power::Power(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Power::evaluate() {
    return pow(left->evaluate(), right->evaluate());
}
