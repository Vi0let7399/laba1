#include <iostream>
#include <string>
#include <cctype>

std::string removePunctuation(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (std::isalnum(c) || std::isspace(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    std::string result = removePunctuation(input);

    std::cout << result << std::endl;

    return 0;
}