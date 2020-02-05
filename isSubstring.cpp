#include <iostream>
#include <string>
#include <sstream>

bool isSubstring(std::string str1, std::string str2)
{
    std::string temp = "", word;
    std::istringstream readword(str1);
    while(readword >> word)
    {
        for(auto el : word)
        {
            if(!ispunct(el))
                temp += el;
        }
        temp += " ";
    }

    if (temp.find(str2) == -1)
        return false;
    else 
        return true;

}

int main()
{
    std::string str1, str2;
    getline(std::cin, str1);
    getline(std::cin, str2);
    if(isSubstring(str1, str2))
        std::cout << "\"" << str2 << "\"" << " IS substring of " << "\"" << str1 << "\"" << std::endl;
    else
        std::cout << "\"" << str2 << "\"" << " NOT a substring of " << "\"" << str1 << "\"" << std::endl;
    return 0;
}