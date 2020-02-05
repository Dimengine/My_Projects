#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

int main()
{
    std::ifstream file("input.txt");
    std::string line;
    int lineCount = 0, wordCount = 0, characterCount = 0, alphabeticCount = 0, digitCount = 0, punctCount = 0, spaceCount = 0; 
    while(getline(file, line))
    {
        ++lineCount;
        characterCount += line.size();
        spaceCount += line.size();
        std::istringstream readline(line);
        std::string word;
        while(readline >> word)
        {
            ++wordCount;
            spaceCount -= word.size();
            
            for(auto el : word)
            {
                if(isalpha(el))
                    ++alphabeticCount;
                else if(isdigit(el))
                    ++digitCount;
                else if(ispunct(el))
                    ++punctCount;
            }
        }
    }

    std::cout << "In this text present:\n"
            << "Lines: " << lineCount << std::endl
            << "Words: " << wordCount << std::endl
            << "Characters: " << characterCount 
            << " (Alphabetic: " << alphabeticCount
            << ", Digits: " << digitCount
            << ", Punctuation: " << punctCount
            << ", Space: " << spaceCount << ")" << std::endl;
    return 0;
}