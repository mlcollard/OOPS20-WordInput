# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.10)

# project info
project(InputWords)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Add all executables
add_executable(Articles Articles.cpp ArticlesWordReader.cpp WordReader.cpp)
add_executable(Dictionary Dictionary.cpp DictionaryWordReader.cpp WordReader.cpp)
add_executable(LongestWord LongestWord.cpp LongestWordWordReader.cpp WordReader.cpp)
add_executable(ShortWords ShortWords.cpp ShortWordsWordReader.cpp WordReader.cpp)
add_executable(WordSizes WordSizes.cpp WordSizesWordReader.cpp WordReader.cpp)
