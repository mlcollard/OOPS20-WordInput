/*
    ShortWordCount.cpp

    Count words with less than 4 chars
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

    int count = 0;
    // count words under 4 chars from input file
    WordReader reader(
        [&count](const std::string& word)->void {
            if (word.size() < 4)
                count++;
        }
    );
    std::ifstream in(argv[1]);
    reader.run(in);

    std::cout << "There were " << count << " words under 4 chars\n";

    return 0;
}
