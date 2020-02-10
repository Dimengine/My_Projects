#include <iostream>
#include <string>
#include <algorithm>

void reverse (std::string &text)
{
    for(int i = 0; i < text.size() / 2; ++i)
        std::swap(text[i], text[text.size() - 1 - i]);
}

int main()
{
    std::string text;
    getline(std::cin, text);
    reverse(text);
    std::cout << text << std::endl;
    return 0;
}