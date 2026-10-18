# C++ Expression Evaluator

A C++ application that reads expressions from a text file and evaluates them using dedicated expression classes and a symbol table for variables.

## Features

- Arithmetic: addition, subtraction, multiplication, division, modulus, and exponentiation
- Additional operations: minimum, maximum, average, and negation
- Ternary and quaternary expressions
- Variable storage and lookup through a symbol table
- Floating-point values
- Exception handling for undefined variables

## Built With

- C++
- Object-oriented programming and class hierarchies
- Expression parsing and evaluation
- Symbol tables
- File I/O and exception handling

## How It Works

The program reads statements from an input file, parses each expression, evaluates it with the matching expression class, and prints the result.

## Run

Open the project in Eclipse CDT with a compatible C++ toolchain, build it, and run the executable from the project directory so it can access `input.txt`. Review `input.txt` and `src/project2.cpp` for the expected input format.