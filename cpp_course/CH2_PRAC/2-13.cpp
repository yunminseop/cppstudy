#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "**** 승리장에 오신 것을 환영합니다. ****" << endl;

    while(true){
        int order;
        int num;
        string menu;

        cout << "짬뽕: 1, 짜장: 2, 군만두: 3, 종료: 4 >> ";
        cin >> order;
        if (order == 1){
            menu = "짬뽕";
        }
        else if (order == 2){
            menu = "짜장";
        }
        else{
            menu = "군만두";
        }
  
        if (order == 4){
            cout << "오늘 영업은 끝났습니다.\n";
            break;
        }
        else if (order != 1 & order != 2 & order !=3){
            cout <<"다시 주문하세요!!" << endl;
            continue;
        }

        cout << "\n 몇인분?";
        cin >> num;

        cout << menu << ' ' << num << "인분 나왔습니다\n";

    }

    return 0;
}