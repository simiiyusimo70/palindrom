#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    // Create a copy of the string and transform it to lowercase
    std::string cleanedStr = str;
    cleanedStr.erase(remove_if(cleanedStr.begin(), cleanedStr.end(), ::isspace), cleanedStr.end());
    std::transform(cleanedStr.begin(), cleanedStr.end(), cleanedStr.begin(), ::tolower);
    
    // Check if the cleaned string is equal to its reverse
    std::string reversedStr = cleanedStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    
    return cleanedStr == reversedStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }
    
    return 0;
}
