#include <iostream>
#include <array>
#include <set>
#include <vector>
#include <algorithm>
#include <random>

int main(){

    std::array <int, 30> arr1 = {};
    std::array <int, 30> arr2 = {};

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1,100);


    for (int i = 0 ; i < arr1.size(); i++)
    {
        arr1[i] = dist(gen);
    }

    for (int i = 0 ; i < arr2.size(); i++)
    {
        arr2[i] = dist(gen);
    }

    std::set<int> st1 = {arr1.begin(), arr1.end()};
    std::set<int> st2 = {arr2.begin(), arr2.end()};
    std::set<int> result = {};
    std::set_intersection(st1.begin(), st1.end(), st2.begin(), st2.end(), std::inserter(result, result.begin()));


    for (auto each : result)
    {
        std::cout << each << std::endl;
    }

    return 0;
}