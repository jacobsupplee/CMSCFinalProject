//Project 2: multiply.cpp file 
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Multiply class.

#include "multiply.h"

Multiply::Multiply(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Multiply::evaluate() {
    return left->evaluate() * right->evaluate();
}