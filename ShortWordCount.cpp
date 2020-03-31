/*
    ShortWordCount.cpp

    Count words with less than 4 characters
*/

#include <iostream>
#include <fstream>
#include "WordReader.hpp"

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // count the short words in the input file
    int shortWords;
    WordReader reader(
        [&shortWords](const std::string& word)->void {

            if (word.size() < 4)
                ++shortWords;
        }
    );
    std::ifstream in(argv[1]);
    reader.run(in);

    // output the number of short words
    std::cout << shortWords << '\n';

    return 0;
}
