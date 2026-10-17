# Expression Evaluator

A C++ expression-evaluation program that reads expression statements and variable assignments from a text file, parses operator expressions, and evaluates the result. The implementation uses an expression-class hierarchy and a symbol table to represent operands, variables, and operations.

## Capabilities

- Parse expressions and associated variable assignments from an input file
- Evaluate arithmetic operations such as addition, subtraction, multiplication, division, modulus, and exponentiation
- Support additional operations including minimum, maximum, average, and negation
- Handle conditional-style ternary and quaternary expression forms
- Store variable values in a symbol table
- Support floating-point values and clear variable state between statements
- Report missing-variable errors through a custom exception type

## Technology

- C++
- Object-oriented programming and class hierarchies
- Expression parsing and evaluation
- Header/source-file organization
- Symbol tables
- File I/O and exception handling

## Run locally

The repository contains C++ source and header files and an Eclipse CDT project configuration. Open it in Eclipse CDT with a compatible C++ toolchain, build the project, and run the executable from the project directory so it can read `input.txt`.

The program expects statements in the input format implemented by the parser. Review `input.txt` and `src/project2.cpp` before preparing new input cases.

## Architecture overview

- **Parser / operand handling:** Reads expression tokens and variable references
- **Expression classes:** Encapsulate the evaluation behavior for supported operators
- **Symbol table:** Associates variable names with numeric values
- **Driver:** Reads each line, clears per-statement state, evaluates the expression, and prints the result

## Current limitations

This is a compact educational expression evaluator rather than a production language runtime. Review and test error paths, malformed input handling, memory ownership, and division/modulus edge cases before using it as a robust general-purpose tool.

## Skills demonstrated

Parsing structured input, designing object-oriented abstractions, extending operator support, managing evaluation state, and handling exceptional conditions.

## Project context

This project originated as coursework. The documentation focuses on the language-processing concepts and implementation choices visible in the source.