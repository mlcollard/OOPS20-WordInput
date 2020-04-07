/*
	WordReader.hpp

	Declarations for reading words from files
*/

#ifndef INCLUDED_DICTIONARY_WORD_READER_HPP
#define INCLUDED_DICTIONARY_WORD_READER_HPP

#include "WordReader.hpp"
#include <set>
#include <string>

class DictionaryWordReader : public WordReader {
public:
    // constructor
    DictionaryWordReader();

    // words in dictionary
    const std::set<std::string>& getDictionary() const;

protected:
    // process every word
    virtual void process(const std::string& word);

private:
    std::set<std::string> words;
};

#endif
