/*
    WordInput.cpp

    Definitions for word reading functions
*/

#include "WordReader.hpp"

// constructor
WordReader::WordReader()
    {}

// process all words in input
void WordReader::run(std::istream& input) {

    std::string word;
    while (input >> word) {

        // words must begin with an alphabetic character
        if (!isalpha(word[0]))
            continue;

        process(word);
    }
}
