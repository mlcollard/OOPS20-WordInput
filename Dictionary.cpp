/*
    Dictionary.cpp

    Creates a dictionary of words
*/

#include <iostream>
#include <fstream>
#include "DictionaryWordReader.hpp"

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // create a dictionary from the input file
    DictionaryWordReader reader;
    std::ifstream in(argv[1]);
    reader.run(in);

    // output the dictionary with each word on a single line
    const auto& words = reader.getDictionary();
    std::copy(words.begin(), words.end(),
              std::ostream_iterator<std::string>(std::cout, "\n"));

    return 0;
}
