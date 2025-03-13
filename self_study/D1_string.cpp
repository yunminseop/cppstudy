#include <iostream>
#include <string>
using namespace std;

int main(){

    string Name ("YunMinSeop");

    int age = 26;

    char phone[20] = "010-6428-3569";

    cout << "이름은 " + Name + "입니다.\n"; // 이렇게 '+'로 붙여 쓸 수 있는 건 문자열 뿐이다.

    cout << "나이는 " << age << "세 입니다.\n";

    cout << "전화번호는 " << phone << " 입니다.\n";

    return 0;
}