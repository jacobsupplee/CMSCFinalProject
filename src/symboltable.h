// CMSC 330 Advanced Programming Languages
// Project 2: symboltable.h file
// Author: Jacob Supplee
// October 2nd, 2026

// Defines the symbol table used to store initialized variables.

#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <string>
#include <vector>

class SymbolTable {
public:
    SymbolTable() = default;
    void insert(std::string variable, double value);
    double lookUp(std::string variable) const;
    void clear();

private:
    struct Symbol {
        Symbol(std::string variable, double value)
            : variable(variable), value(value) {
        }

        std::string variable;
        double value;
    };

    std::vector<Symbol> elements;
};

#endif
