/*
    LongestWord.cpp

    Find the longest word
*/

#include <iostream>
#include <fstream>
#include <string>
#include "WordReader.hpp"

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // find the longest word in the input file
    std::string longWord;
    WordReader reader(
        [&longWord](const std::string& word)->void {

            if (word.size() > longWord.size())
                longWord = word;
        }
    );
    std::ifstream in(argv[1]);
    reader.run(in);

    // output the longest word
    std::cout << longWord << '\n';

    return 0;
}
