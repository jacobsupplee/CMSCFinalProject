//Project 2: ternary.cpp file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Implements the Ternary class

#include "ternary.h"

Ternary::Ternary(Expression* condition, Expression* trueExpression,
                 Expression* falseExpression) {
    this->condition = condition;
    this->trueExpression = trueExpression;
    this->falseExpression = falseExpression;
}

double Ternary::evaluate() {
    if (condition->evaluate() != 0)
        return trueExpression->evaluate();
    return falseExpression->evaluate();
}