#include <iostream>
using namespace std;

int main(){

    cout << "너비를 입력하세요 >> ";

    int width;

    cin >> width;

    cout << "입력된 너비는 " << width << "입니다." << endl;

    cout << "높이를 입력하세요 >> ";

    int height;

    cin >> height;

    cout << "입력된 높이는 " << height << "입니다." << endl;

    int area = width*height;

    cout << "면적은 " << area << "입니다." << endl;

    return 0;
}