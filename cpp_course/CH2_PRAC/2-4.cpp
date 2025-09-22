#include <iostream>

using namespace std;

int main(){

    double num[5];
    int len = sizeof(num)/sizeof(double);

    cout << "5개의 실수를 입력하라>> ";
    
    for (int i = 0; i < len; i++){
        cin >> num[i];
    }

    double max = num[0];

    for (int i = 1; i < len; i++){
        if (num[i] > max){
            max = num[i];
        }
    }

    cout << "제일 큰 수 = " << max << endl;

    return 0;
}