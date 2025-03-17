#include <iostream>
#include <string>

int main(){
    char name1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char name2[5] =  {'H', 'e', 'l', 'l', 'o'};

    // name1 = string / name2 = word list.

    std::string str ("HelloWorld");
    char name3[15] = "HelloWorld";
    int len = sizeof(name3)/sizeof(name3[0]);
    std::cout << len << std::endl;
    std::cout << str.length() << std::endl;
    str.append("hehe");
    std::cout << str.length() << std::endl;

    for (int i = 0 ; i < len ; i++)
    {
        std::cout << name3[i] << std::endl;
    }

    for (int i = 0 ; i < str.length(); i++)
    {
        std::cout << str[i] << std::endl;
    }
    
}