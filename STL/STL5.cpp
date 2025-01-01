#include <iostream>
#include <list>

struct numStruct
{
    numStruct(int num1, int num2) : Num1(num1), Num2(num2) {} // 생성자와 멤버 이니셜라이저 리스트

    int Num1;
    int Num2;
};

int main()
{
    std::list<numStruct> numlist;

    numStruct numset1(30, 60);

    numlist.push_front(numset1);

    std::cout << numset1.Num1 << std::endl;

    numStruct numset2(20, 40);

    numlist.push_back(numset2);

    for(std::list<numStruct>::iterator iter = numlist.begin(); iter != numlist.end(); iter++)
    {
        std::cout << "iter->num1:" << iter->Num1 << std::endl;
        std::cout << "iter->num2:" << iter->Num2 << std::endl;
    }

    numlist.pop_front();

    numStruct front_num = numlist.front();

    std::cout << "front data is " << front_num.Num1 << std::endl;

    for(std::list<numStruct>::iterator iter = numlist.begin(); iter != numlist.end(); iter++)
    {
        std::cout << "iter->num1:" << iter->Num1 << std::endl;
        std::cout << "iter->num2:" << iter->Num2 << std::endl;
    }

    numlist.pop_back();

    return 0;
}