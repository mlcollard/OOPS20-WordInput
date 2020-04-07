/*
    DictionaryWordReader.cpp

    Definitions for dictionary word reading functions
*/

#include "DictionaryWordReader.hpp"

// constructor
DictionaryWordReader::DictionaryWordReader()
    {}

// process every word into a dictionary
void DictionaryWordReader::process(const std::string& word) {

    words.insert(word);
}

// words in dictionary
const std::set<std::string>& DictionaryWordReader::getDictionary() const {

    return words;
}
