/*
    WordInput.cpp

    Definitions for word reading functions
*/

#include "WordInput.hpp"
#include <ctype.h>

// read all the words from a file and apply process() to them
void wordRead(std::istream& input,
              std::function<void(const std::string& word)> process) {

    std::string word;
    while (input >> word) {

        // words must begin with an alphabetic character
        if (!isalpha(word[0]))
            continue;

        process(word);
    }
}
