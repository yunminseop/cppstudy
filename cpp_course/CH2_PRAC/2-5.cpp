#include <iostream>

using namespace std;

int main(){

    char word[100];
    int len = sizeof(word)/sizeof(char);

    cout << "문자들을 입력하라(100개 미만).\n";

    cin.getline(word, 100, '\n');

    int cnt = 0;

    for (int i = 0; i < len; i++){
        if(word[i]==' '){
            cnt ++;
        }
    }

    cout << "x의 개수는 " << cnt + 1 << '\n';
    return 0;
}