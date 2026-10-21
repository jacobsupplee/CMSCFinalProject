# C++ Expression Evaluator

A C++ expression evaluator built around an object-oriented expression hierarchy. It reads statements from a text file, parses nested expressions, resolves variables through a symbol table, and evaluates each result. Originally developed from the UMGC CMSC 330 course-provided project skeleton and extended with additional validation, error handling, and regression tests.

## Features

- **Object-oriented design:** dedicated expression classes using inheritance and polymorphism
- **Operators:** arithmetic, exponentiation, minimum, maximum, average, unary negation, ternary selection, and quaternary sign-based selection
- **Floating-point support:** decimal literals and variable assignments evaluated as `double`
- **Variable management:** symbol-table insertion, lookup, duplicate detection, and reset between statements
- **Input validation:** reports malformed expressions, invalid assignments, and unexpected trailing characters
- **Error handling:** handles division by zero, modulo by zero, uninitialized variables, and duplicate assignments
- **Regression tests:** automated output comparison for 22 valid and invalid input cases

## Operators

| Operator | Behavior |
| --- | --- |
| `+`, `-`, `*`, `/`, `%`, `^` | Addition, subtraction, multiplication, division, modulus, and exponentiation |
| `<`, `>`, `&` | Minimum, maximum, and average of two operands |
| `~` | Unary negation |
| `?` | Ternary selection: choose one of two expressions based on whether the condition is nonzero |
| `#` | Quaternary selection: choose an expression for a negative, zero, or positive condition |

## Input Format

Each line contains a parenthesized expression, a comma, variable assignments, and a semicolon terminator. Nested expressions are supported.

```text
((x * 2.6) + (y - 3)), x = 1.5, y = 6;
```

Example output:

```text
((x * 2.6) + (y - 3)), x = 1.5, y = 6; Value = 6.9
```

Each statement starts with a cleared symbol table, so assignments from one line do not carry over to the next.

## Build and Run on Windows

Use the **Developer Command Prompt for Visual Studio** with the C++ build tools installed. From the repository directory, compile the program:

```cmd
cl /EHsc /std:c++17 /Fe:Project2.exe src\*.cpp
```

Run the default sample input:

```cmd
.\Project2.exe
```

To select a different input file:

```cmd
.\Project2.exe input.txt
```

The default run reads `input.txt`. When an input filename is provided, the program reads that file instead.

## Run Regression Tests

The regression suite compiles the source, runs 22 test cases, and compares the output against the expected results.

```cmd
run_tests.bat
```

A successful run ends with:

```text
FC: no differences encountered
All regression tests passed.
```

The tests cover arithmetic and custom operators, conditional expressions, division and modulo by zero, malformed expressions, uninitialized variables, duplicate assignments, invalid numeric values, and unexpected trailing input.

## Project Structure

- `src/project2.cpp` — program entry point, input loop, statement evaluation, and assignment parsing
- `src/subexpression.cpp` and `src/operand.cpp` — expression parsing and operator dispatch
- `src/symboltable.*` — variable storage, lookup, duplicate detection, and reset
- `src/variableException.*` — custom variable-related exception
- Other files in `src/` — expression and operator classes
- `input.txt` — sample expressions and variable assignments
- `tests/input.txt` — regression test input cases
- `tests/expected.txt` — expected output for regression comparison
- `run_tests.bat` — Windows build and regression test script

## Technical Concepts

C++, object-oriented programming, inheritance, polymorphism, recursive parsing and evaluation, symbol tables, file I/O, exception handling, input validation, and regression testing.

## Academic Context

Originally developed for UMGC CMSC 330 (Advanced Programming Languages) and extended with additional operators, floating-point support, variable error handling, input validation, and regression tests. Course-provided skeleton files retain their original attribution.
