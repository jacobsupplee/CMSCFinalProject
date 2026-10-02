// CMSC 330 Advanced Programming Languages
// Project 2: variableException.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// Implementation of the VariableException class

#include "variableException.h"

VariableException::VariableException(string message) {
    this->message = message;
}

const char* VariableException::what() const noexcept {
    return message.c_str();
}