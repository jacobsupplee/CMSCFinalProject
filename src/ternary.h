//Project 2: ternary.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Ternary class - evaluates a conditional expression w/ three operands

#ifndef TERNARY_H
#define TERNARY_H
#include <memory>
#include "expression.h"

class Ternary : public Expression {
public:
    Ternary(Expression* condition, Expression* trueExpression, Expression* falseExpression);
    double evaluate();
private:
    // Owns the condition and both result expressions.
    std::unique_ptr<Expression> condition;
    std::unique_ptr<Expression> trueExpression;
    std::unique_ptr<Expression> falseExpression;
};

#endif