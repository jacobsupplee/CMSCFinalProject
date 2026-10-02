//Project 2: negation.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Negation class

#include "negation.h"

Negation::Negation(Expression* operand) {
    this->operand = operand;
}

double Negation::evaluate() {
    return -operand->evaluate();
}