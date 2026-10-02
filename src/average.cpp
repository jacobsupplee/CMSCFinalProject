//Project 2: average.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implementation of the Average class

#include "average.h"

Average::Average(Expression* left, Expression* right)
    : SubExpression(left, right) {
}

double Average::evaluate() {
    return (left->evaluate() + right->evaluate()) / 2;
}