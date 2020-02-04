#include <iostream>
#include <string>

std::string reverse (std::string text)
{
    std::string reverseText= "";
    auto it = text.end();
    while(it-- != text.begin() - 1)
        reverseText += *it;
    return reverseText;
}

int main()
{
    std::string text;
    getline(std::cin, text);
    std::cout << reverse(text) << std::endl;
    return 0;
}