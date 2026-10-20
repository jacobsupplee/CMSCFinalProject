# C++ Expression Evaluator

A C++ expression evaluator built around an object-oriented expression hierarchy. It reads statements from `input.txt`, parses nested expressions, resolves variables through a symbol table, and evaluates the result. Developed as an extension of the UMGC CMSC 330 course-provided project skeleton.

## Features

- **Expression hierarchy:** dedicated classes for literals, variables, and operations, using inheritance and polymorphic evaluation
- **Operators:** arithmetic, exponentiation, minimum, maximum, average, unary negation, ternary selection, and quaternary sign-based selection
- **Floating-point support:** decimal literals and variable assignments evaluated as `double`
- **Variable management:** symbol-table insertion, lookup, and clearing between statements
- **Error handling:** custom `VariableException` messages for uninitialized variables and duplicate assignments
- **Input processing:** reads one expression-and-assignment statement per line from a text file

## Operators

| Operator | Behavior |
| --- | --- |
| `+`, `-`, `*`, `/`, `%`, `^` | Addition, subtraction, multiplication, division, modulus, and exponentiation |
| `<`, `>`, `&` | Minimum, maximum, and average of two operands |
| `~` | Unary negation |
| `?` | Ternary selection: choose one of two expressions based on whether the condition is nonzero |
| `#` | Quaternary selection: choose an expression for a negative, zero, or positive condition |

## Input Format

Each line contains a parenthesized expression followed by comma-separated variable assignments. Nested expressions are supported.

```text
((x * 2.6) + (y - 3)), x = 1.5, y = 6;
```

The evaluator prints the original statement and its result:

```text
((x * 2.6) + (y - 3)), x = 1.5, y = 6; Value = 6.9
```

Each statement starts with a cleared symbol table, so assignments from one line do not carry over to the next. Repeated assignments within the same statement and references to variables that were not assigned produce a `VariableException` message.

## Project Structure

- `src/project2.cpp` — program entry point, input loop, statement evaluation, and assignment parsing
- `src/subexpression.cpp` and `src/operand.cpp` — expression parsing and operator dispatch
- `src/symboltable.*` — variable storage, lookup, duplicate detection, and reset
- `src/variableException.*` — custom variable-related exception
- Other files in `src/` — expression and operator classes
- `input.txt` — sample expressions and variable assignments

## Run

1. Open the project in **Eclipse CDT** with a compatible C++ toolchain.
2. Build the project.
3. Run the executable from the project directory so it can find `input.txt`.

The current parser expects input to follow the supported expression syntax; general malformed-expression diagnostics are not implemented.

## Technical Concepts

C++, object-oriented programming, inheritance, polymorphism, expression parsing, recursive expression evaluation, symbol tables, file I/O, and exception handling.

## Academic Context

Originally developed for UMGC CMSC 330 (Advanced Programming Languages) and extended with additional operators, floating-point support, variable error handling, and symbol-table reset behavior. Course-provided skeleton files retain their original attribution.
