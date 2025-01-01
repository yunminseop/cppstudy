#include <iostream>
#include <algorithm>
#include <array>
#include <set>


int main(){
    std::array <int , 5> arr ={};


    for (int i = 0 ; i < 5 ; i++)
    {
        std::cout << "정수를 입력하시오:";
        std::cin >> arr[i];
    }


    std::set<int> st(arr.begin(), arr.end());


    //std::stable_sort(st.begin(), st.end());


    for (auto each:st)
    {
        std::cout << each << std::endl;
    }



    return 0;
}
