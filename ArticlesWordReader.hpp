/*
    ArticlesWordReader.hpp

    Declarations for reading words from files
*/

#ifndef INCLUDED_ARTICLES_WORD_READER_HPP
#define INCLUDED_ARTICLES_WORD_READER_HPP

#include "WordReader.hpp"
#include <string>
#include <map>

class ArticlesWordReader : public WordReader {
public:
    // constructor
    ArticlesWordReader();

    // count of particular article
    int getCount(const std::string& article) const;

protected:
    // count every article
    virtual void process(const std::string& word);

private:
    // number of each English language article
    std::map<std::string, int> words;
};

#endif
