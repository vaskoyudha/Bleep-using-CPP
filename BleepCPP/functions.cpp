#include "functions.hpp"
#include <vector>
#include <iostream>
#include <string>

std::vector<char> bleep(std::vector<char> text, std::vector<char> word) {
    std::vector<char> store;
    std::vector<char> result;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] != ' ') {
            store.push_back(text[i]);
        } else {
            if (store == word) {
                for (int j = 0; j < word.size(); ++j) {
                    result.push_back('*');
                }
            } else {
                result.insert(result.end(), store.begin(), store.end());
            }
            result.push_back(' ');
            store.clear();
        }
    }

    // Handle the last word (if no trailing space)
    if (store == word) {
        for (int j = 0; j < word.size(); ++j) {
            result.push_back('*');
        }
    } else {
        result.insert(result.end(), store.begin(), store.end());
    }

    return result;
}

std::vector<char> convertToChar(const std::string& word) {
    return std::vector<char>(word.begin(), word.end());
}
