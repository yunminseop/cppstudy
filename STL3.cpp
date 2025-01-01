/*문자열을 입력받아 각 단어의 빈도 수를 세어 출력하는 프로그램을 작성하시오. STL의 map 컨테이너를 활용하세요.*/
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main()
{
    // std::string text, myAnswer;
    // std::map<std::string, int> dict;
    // std::cout << "문자열을 입력하시오: ";
    // std::getline(std::cin, text);
    
    // std::istringstream finder(text);
    // while(finder >> myAnswer)
    // {
    //     dict[myAnswer];
    // }
    
    // for(auto &each : dict)
    // {
    //     std::cout << each.first << "는 총 " << each.second <<"번 나왔습니다." << std::endl;
    // }

    // std::string text = "Hello World one two three four five sixt";
    // std::istringstream iss(text);
    // std::string container;

    // for (int i = 0; iss >> container ; i++)
    // {
    //     if (i%2 == 1)
    //     {
    //         continue;
    //     }
    //     std::cout << container << std::endl;
    // }

    std::string text;
    std::ostringstream oss;

    oss << "Hello";
    oss << "World";
    oss << "Minseop";

    text = oss.str();

    std::cout << text << std::endl;

    return 0;
}