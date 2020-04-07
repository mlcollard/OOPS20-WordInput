/*
	WordReader.hpp

	Declarations for reading words from files
*/

#ifndef INCLUDED_WORD_READER_HPP
#define INCLUDED_WORD_READER_HPP

#include <istream>

class WordReader {
public:
    // constructor
    WordReader();

    // process all words in input
    void run(std::istream& input);

protected:

    // process every word
    virtual void process(const std::string& word) = 0;
};

#endif
