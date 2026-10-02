//Project 2: modulus.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Modulus class utilizing cmath fmod function

#include "modulus.h"
#include <cmath>

Modulus::Modulus(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Modulus::evaluate() {
    return fmod(left->evaluate(), right->evaluate());
}