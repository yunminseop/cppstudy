#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char password[11];

    cout << "프로그램을 종료하려면 암호를 입력하세요.\n";

    while(true){
        cout << "암호 >> ";
        cin >> password;

        if (strcmp(password, "159753ff")==0){
            break;  
        }
    }

    cout << "잠금해제 완료 \n";
    return 0;
}