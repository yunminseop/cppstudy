#include <iostream>
#include <limits>
using namespace std;

// cin의 특징: 엔터 키가 입력될 때까지 입력된 키를 입력 버퍼에 저장.
// 엔터가 입력되면 비로소 cin의 입력 버퍼에서 '\n'을 제외한 값을 모두 읽어 변수에 전달
// 공백을 포함한 문자열을 모두 읽어들이지 못함. 공백 전까지만 읽음.

// 해결방법: cin.getline or <string> getline(cin, a)

int main(){
    char sentence1[20];
    char sentence2[20];

    cout << "첫 번째 문장을 입력하시오: ";
    cin >> sentence1 ;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // cin의 단점 보완
    // 공백 이후 남은 문자열 및 개행 문자 전부 제거
    cout << sentence1 << endl;



    cout << "두 번째 문장을 입력하시오: ";
    cin.getline(sentence2, 20, '\n');
    cout << sentence2;

    return 0;
}