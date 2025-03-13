#include <iostream>
using namespace std;

// 마찬가지로 너비와 높이를 입력받아 면적을 출력하는데, 입력을 한 번에 받으시오.
int main(){
    int width, height;

    cout <<"너비와 높이를 입력하시오: ";
    cin >> width >> height ;

    cout << "면적은 " << width*height <<"입니다.";

    return 0;
}

/* >> 연산자는 스트림 추출 연산자로, 입력 스트림에서 값을 읽어 변수에 저장하는데
연속된 연산자를 사용하여 여러 값을 입력받을 수 있음. */