/*
	WordInput.hpp

	Declarations for reading words from files
*/

#ifndef INCLUDED_WORD_INPUT_HPP
#define INCLUDED_WORD_INPUT_HPP

#include <istream>

// read all the words from a file
void wordRead(std::istream& input,
              std::function<void(const std::string& word)> process);

#endif
