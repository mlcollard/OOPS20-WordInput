/*
	WordReader.hpp

	Declarations for reading words from files
*/

#ifndef INCLUDED_WORD_READER_HPP
#define INCLUDED_WORD_READER_HPP

#include <istream>
#include <functional>

class WordReader {
public:
    // constructor
    WordReader(std::function<void(const std::string& word)> process);

    // process all words in input
    void run(std::istream& input);

private:
    std::function<void(const std::string& word)> process;
};

#endif
