/*
    ShortWordCount.cpp

    Count the short words (less than 4 characters)
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

    // count the short words from the input file 
    int shortWordCount = 0;
    std::ifstream in(argv[1]);
    WordReader reader(
        [&shortWordCount](const std::string& word)->void {

            if (word.size() < 4)
                ++shortWordCount;
        }
    );
    reader.run(in);

    // output the short word count 
    std::cout << "Short Word Count: " << shortWordCount << "\n";

    return 0;
}
