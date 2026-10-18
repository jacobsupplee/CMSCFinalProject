# C++ Expression Evaluator

This project reads expressions from a text file and evaluates them in C++. It supports arithmetic, variables, and a few other operations. Different expression classes handle the operators, and a symbol table keeps track of variable values while the program runs.

## Features

- Evaluates addition, subtraction, multiplication, division, modulus, and exponentiation
- Supports minimum, maximum, average, and negation
- Handles ternary and quaternary expression forms
- Stores and looks up variables using a symbol table
- Works with floating-point values
- Uses a custom exception for references to variables that do not exist

## Built with

- C++
- Object-oriented programming and class hierarchies
- Expression parsing and evaluation
- Symbol tables
- File I/O and exception handling

## How it works

The program reads statements from an input file, parses each expression, and evaluates it using the relevant expression classes. Variable values are looked up in the symbol table, and the result is printed.

## Running the project

The repository includes an Eclipse CDT project configuration. Open it in Eclipse CDT with a compatible C++ toolchain, build the project, and run the executable from the project directory so it can access `input.txt`.

Check `input.txt` and `src/project2.cpp` to see the input format this version expects.

## Notes

This project started as coursework and gave me practice with class hierarchies, expression parsing, variable tracking, and error handling. It is a small expression evaluator rather than a full programming language, so malformed input and edge cases would need additional testing before expanding its use.
