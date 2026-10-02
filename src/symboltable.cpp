// CMSC 330 Advanced Programming Languages
// Project 2: symboltable.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

//Added error handling for duplicate and uninitialized variables, and clearing the symbol table

#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"
#include "variableException.h"  //Include VariableException class

void SymbolTable::insert(string variable, double value) {

    //Ensuring variable has not been initialized already
    for (int i = 0; i < elements.size(); i++) {
        if (elements[i].variable == variable)
            throw VariableException("The variable " + variable + " has already been initialized");
    }

    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;

    //Throws exception when variable is not initialized
    throw VariableException("The variable " + variable + " is not initialized");
}

//Clears the symbol table between statements 
void SymbolTable::clear() {
    elements.clear();
}