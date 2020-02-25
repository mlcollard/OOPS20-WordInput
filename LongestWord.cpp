/*
    LongestWord.cpp

    Find the longest word
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // find the longest word in the input file
    std::string longWord;
    std::ifstream in(argv[1]);

    // output the longest word
    std::cout << longWord << '\n';

    return 0;
}
