#include <iostream>
#include <array>
#include <set>
#include <map>

int main(){
    std::map <char, int> dict;
    dict.insert(std::pair<char, int> ('A', 5));



    std::cout << dict['A'];

    return 0;
}
