/*
    ShortWords.cpp

    Output only words shorter than n
*/

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 3) {
        std::cerr << "usage: " << argv[0] << " <input_file> <max_length>\n";
        return 1;
    }

    // maximum length
    const int max = std::stoi(argv[2]);

    // output words shorter than max from the input file
    std::ifstream in(argv[1]);

    return 0;
}
