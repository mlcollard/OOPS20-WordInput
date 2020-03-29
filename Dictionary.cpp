/*
    Dictionary.cpp

    Creates a dictionary of words
*/

#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <set>
#include "WordReader.hpp"

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // collect a set of words from the input file
    std::set<std::string> words;
    WordReader reader(
        [&words](const std::string& word)->void {

            words.insert(word);
        }
    );
    std::ifstream in(argv[1]);
    reader.run(in);

    // output the dictionary with each word on a single line
    std::copy(words.begin(), words.end(),
              std::ostream_iterator<std::string>(std::cout, "\n"));

    return 0;
}
