// CMSC 330 Advanced Programming Languages
// Project 2: expression.h file
// Author: Jacob Supplee
// October 2nd, 2026

// This file contains the definition of the Expression class, which is an abstract class that contains one
// abstract (pure virtual) function named evaluate, which must be implemented by all its subclasses.

//Added include guard to prevent multiple definitions of the Expression class
#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression {
public:
    virtual ~Expression() = default;
    virtual double evaluate() = 0;
};

#endif
