#include <iostream>

using namespace std;

int main(){
    char word[6];

    cout << "문자열 입력>>";
    cin.getline(word, 6, '\n');

    int len = sizeof(word)/sizeof(char);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < i; j++){
            cout << word[j];
        }
        cout << endl;
    }

    return 0;
}