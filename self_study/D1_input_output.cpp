#include <iostream>
using namespace std;
// 너비와 높이를 입력받아 면적을 계산하는 프로그램을 작성하시오.

int main(){

    int height, width;

    cout << "너비를 입력하시오: ";
    cin >> width;

    cout << "높이를 입력하시오: ";
    cin >> height;

    cout << "면적은 " <<width*height<< "입니다.\n";

    return 0;
}