#include <iostream>
#include <list>

struct numStruct
{
    numStruct(int num1, int num2) : Num1(num1), Num2(num2) {}

    int Num1;
    int Num2;
};

int main()
{
    std::list<int> numlist1;

    numlist1.push_back(10);
    numlist1.push_front(20);
    numlist1.push_back(30);
    numlist1.push_front(40);

    for (std::list<int>::iterator iter = numlist1.begin(); iter!=numlist1.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

    numlist1.remove(20);

    std::cout << "after remove 20..." << std::endl;

    for (std::list<int>::iterator iter = numlist1.begin(); iter != numlist1.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

    std::list < numStruct* > numset;

    numStruct* pnum1 = new numStruct(20, 40);
    numStruct* pnum2 = new numStruct(30, 60);
    numStruct* pnum3 = new numStruct(10, 20);

    numset.push_back(pnum1);
    numset.push_back(pnum2);
    numset.push_front(pnum3);

    std::cout << "let's see numset" << std::endl;

    for (std::list<numStruct*>::iterator iter = numset.begin(); iter != numset.end(); iter ++)
    {
        std::cout << "(" << (*iter)->Num1 << ", " << (*iter)->Num2 << ")" << std::endl;
    }

    numset.remove(pnum2);

    std::cout << "let's see numset after remove pnum2" << std::endl;

    for (std::list<numStruct*>::iterator iter = numset.begin(); iter !=numset.end(); iter++)
    {
        std::cout << "(" << (*iter)->Num1 << ", " << (*iter)->Num2 << ")" << std::endl;
    }
    return 0;
}