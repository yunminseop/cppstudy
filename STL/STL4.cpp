/*최빈값 구하기
정수 배열을 입력받아 최빈값(가장 많이 등장하는 수)을 구하는 프로그램을 작성하시오. STL의 unordered_map을 사용하여 각 숫자의 빈도를 기록하고, 최빈값을 찾으세요.*/

#include <iostream>
#include <unordered_map>
#include <utility>
#include <array>
#include <algorithm>

int main()
{
    std::unordered_map <int , int> dict;
    std::array<int , 5> arr;
    int num;

    for(int i=0; i<arr.size(); i++)
    {
        std::cout << "배열에 넣을 정수를 입력하시오: ";
        std::cin >> num;
        dict[num]++;
    }
    int max_key;
    for(std::unordered_map<int ,int>::iterator iter = dict.begin(); iter != dict.end(); iter++){
        std::cout << iter->first << "의 등장횟수: "<< iter->second << std::endl;
        static int max = iter->second;
        if (max < iter->second)
        {
            max = iter -> second;
            max_key = iter->first;
        }
        std::cout << max << std::endl;
    }
    std::cout << "최빈값은 " << max_key << "입니다!" << std::endl;
    //std::cout << max_key << "는 총 " << max << "번 등장했습니다." << std::endl;
    // std::cout << "최빈값은 " <<  << "입니다!" << std::endl;
    // std::cout << max << "는 총 " << dict[max] << "번 등장했습니다." << std::endl;


    return 0;
}