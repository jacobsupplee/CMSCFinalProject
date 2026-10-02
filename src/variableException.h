// CMSC 330 Advanced Programming Languages
// Project 2: variableException.h file
// Author: Jacob Supplee
// October 2nd, 2026

//Defines a VariableException class used to report errors involving variables.

#ifndef VARIABLEEXCEPTION_H
#define VARIABLEEXCEPTION_H
#include <exception>
#include <string>
using namespace std;

class VariableException : public exception {
public:
    VariableException(string message);
    const char* what() const noexcept override;
private:
    string message;
};

#endif