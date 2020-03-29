/*
    WordInput.cpp

    Definitions for word reading functions
*/

#include "WordReader.hpp"
#include "WordInput.hpp"

// constructor
WordReader::WordReader(std::function<void(const std::string& word)> process)
    : process(process) {

}

// process all words in input
void WordReader::run(std::istream& input) {

    wordRead(input, process);
}
