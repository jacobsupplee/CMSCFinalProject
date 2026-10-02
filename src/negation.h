//Project 2: negation.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Negation class - finds negative value of an expression.

#ifndef NEGATION_H
#define NEGATION_H
#include "expression.h"

class Negation : public Expression {
public:
    Negation(Expression* operand);
    double evaluate();

private:
    Expression* operand;
};

#endif