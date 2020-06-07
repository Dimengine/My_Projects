#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

bool isPalindrome(const std::string &text)
{
    std::string temp = "", word;
    std::istringstream readword(text);
    while(readword >> word)
    {
        for(auto el : word)
            if(isalnum(el))
                temp += tolower(el);
    }
    for(auto bit = temp.begin(), eit = temp.end() - 1; bit != temp.begin() + (temp.end() - temp.begin()) / 2; ++bit, --eit)
        if (*bit != *eit)
            return false;
    return true;
}

int main()
{
    std::string text;
    getline(std::cin, text);
    if(isPalindrome(text))
        std::cout << "\"" << text << "\"" << " IS a Palindrome!" << std::endl;
    else
        std::cout << "\"" << text << "\"" << " NOT a Palindrome!" << std::endl;
    return 0;
}
