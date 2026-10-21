//Project 2: quaternary.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Quaternary class - evaluates a conditional expression w/ four operands

#ifndef QUATERNARY_H
#define QUATERNARY_H
#include <memory>
#include "expression.h"

class Quaternary : public Expression {
public:
    Quaternary(Expression* condition, Expression* negative, Expression* zero, Expression* positive);
    double evaluate();
private:
    // Owns the condition and all three result expressions.
    std::unique_ptr<Expression> condition;
    std::unique_ptr<Expression> negative;
    std::unique_ptr<Expression> zero;
    std::unique_ptr<Expression> positive;
};

#endif