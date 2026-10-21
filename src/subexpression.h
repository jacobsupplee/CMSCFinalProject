// CMSC 330 Advanced Programming Languages
// Project 2: subexpression.h file
// Author: Jacob Supplee
// October 2nd, 2026

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp.

#ifndef SUBEXPRESSION_H
#define SUBEXPRESSION_H

#include <memory>         // Include unique_ptr
#include <sstream>         // Include stringstream
#include "expression.h"   // Include expression class

// Prevent multiple definitions of the SubExpression class.

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(std::stringstream& in);  // Use the standard stringstream type
protected:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

#endif
