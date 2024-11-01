#include <iostream>
#include <vector>
#include <string>
#include "functions.hpp"

int main() {
    std::string inputText;
    std::string wordToBleep;
    std::cout << "Please input the text you want to censore: \n";
    std::getline(std::cin, inputText);
    std::cout << "Please input the word you want to censore: \n";
    std::getline(std::cin, wordToBleep);
    std::cout << "\n";


    std::vector<char> text = convertToChar(inputText);
    std::vector<char> word = convertToChar(wordToBleep);

    std::vector<char> result = bleep(text, word);

    for (char c : result) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
