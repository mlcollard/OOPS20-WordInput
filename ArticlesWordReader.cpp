/*
    ArticlesWordReader.cpp

    Definitions for Articles word reading functions
*/

#include "ArticlesWordReader.hpp"

// constructor
ArticlesWordReader::ArticlesWordReader() {}

// count every article
void ArticlesWordReader::process(const std::string& word) {

    ++words[word];
}

// count of particular article
int ArticlesWordReader::getCount(const std::string& article) const {

    auto entry = words.find(article);
    if (entry == words.end())
        return 0;

    return entry->second;
}
