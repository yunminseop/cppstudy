#include <iostream>

using namespace std;

int main(){

    cout << "두 수를 입력하라>>";

    int num1, num2;

    cin >> num1 >> num2;

    cout << "큰 수 = " << max(num1, num2);

    return 0;
}