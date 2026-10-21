//Project 2: negation.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Negation class - finds negative value of an expression.

#ifndef NEGATION_H
#define NEGATION_H
#include <memory>
#include "expression.h"

class Negation : public Expression {
public:
    Negation(Expression* operand);
    double evaluate();

private:
    // Owns the operand and releases it automatically.
    std::unique_ptr<Expression> operand;
};

#endif