/*
    WordInput.cpp

    Definitions for word reading functions
*/

#include "WordInput.hpp"

// read all the words from a file and apply process() to them
void wordRead(std::istream& input,
              std::function<void(const std::string& word)> process) {

    std::string word;
    while (input >> word) {

        process(word);
    }
}
