#include <iostream>
#include <string>

bool isPalindrome(std::string text)
{
    for(auto bit = text.begin(), eit = text.end() - 1; bit != text.end() - (text.end() - text.begin()) / 2; ++bit, --eit)
        if (*bit != *eit)
            return false;
    return true;
}

int main()
{
    std::string text;
    getline(std::cin, text);
    if(isPalindrome(text))
        std::cout << "It is Palindrome!" << std::endl;
    else
        std::cout << "Not a Palindrome!" << std::endl;
    return 0;
}