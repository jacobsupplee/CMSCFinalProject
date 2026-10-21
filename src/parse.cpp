// CMSC 330 Advanced Programming Languages
// Project 2: parse.cpp file
// Author: Jacob Supplee
// October 2nd, 2026

// Parses a variable name by consuming alphanumeric characters and underscores.

#include <cctype>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    string name;
    int next;

    in >> ws;
    while ((next = in.peek()) != char_traits<char>::eof() &&
           (isalnum(static_cast<unsigned char>(next)) || next == '_')) {
        name += static_cast<char>(in.get());
    }

    return name;
}