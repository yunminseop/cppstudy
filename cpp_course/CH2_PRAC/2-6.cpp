#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[10];
    char check_str[10];

    cout << "새 암호를 입력하세요>>";
    cin >> str;

    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> check_str;

    if (strcmp(str, check_str)==0){
        cout << "같습니다.\n";
    }
    else{
        cout << "틀렸습니다.\n";
    }

    return 0;
}