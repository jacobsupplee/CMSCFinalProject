//Project 2: ternary.h file
//Author: Jacob Supplee
//Date: October 2nd, 2026
//CMSC 330 Advanced Programming Languages
//File Description: Defines the Ternary class - evaluates a conditional expression w/ three operands

#ifndef TERNARY_H
#define TERNARY_H
#include "expression.h"

class Ternary : public Expression {
public:
    Ternary(Expression* condition, Expression* trueExpression, Expression* falseExpression);
    double evaluate();
private:
    Expression* condition;       // Stores the condition expression
    Expression* trueExpression;  // Stores the expression used when condition is not zero
    Expression* falseExpression; // Stores the expression used when condition equals zero
};

#endif