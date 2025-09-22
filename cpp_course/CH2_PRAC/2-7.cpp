#include <iostream>
#include <cstring>

using namespace std;

int main(){

    while (true){

        char word[10];

        cout << "종료하고 싶으면 yes를 입력하세요>>";
        cin.getline(word, 10, '\n');

        if(strcmp(word, "yes")==0){
            break;
        }
    }

    cout << "종료합니다..." << endl;
    
    return 0;
}