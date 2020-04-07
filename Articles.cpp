/*
    Articles.cpp

    Summarize usage frequencey of English language articles
*/

#include <iostream>
#include <fstream>
#include "ArticlesWordReader.hpp"

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // count the articles from the input file
    ArticlesWordReader reader;
    std::ifstream in(argv[1]);
    reader.run(in);

    // output report on English-language articles
    std::cout << "the" << ": " << reader.getCount("the") << '\n';
    std::cout << " an" << ": " << reader.getCount("an")  << '\n';  
    std::cout << "  a" << ": " << reader.getCount("a")   << '\n';   

    return 0;
}
