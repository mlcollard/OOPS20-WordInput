/*
    WordSizes.cpp

    Find the length of the shorted and longest words in the input
    file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // find the range of sizes of the word in the input file
    size_t minSize = std::numeric_limits<size_t>::max();
    size_t maxSize = 0;
    std::ifstream in(argv[1]);

    // output the word sizes
    std::cout << "Shortest: " << minSize << '\n';
    std::cout << "Longest: "  << maxSize << '\n';

    return 0;
}
