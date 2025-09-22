#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char name[100];
    char add[100];
    int age;

    cout << "이름은?";
    cin.getline(name, 100, '\n');

    cout << "주소는?";
    cin.getline(add, 100, '\n');

    cout << "나이는?";
    cin >> age;

    cout << name << ", " << add << ", " << age <<"세\n";

    return 0;
}