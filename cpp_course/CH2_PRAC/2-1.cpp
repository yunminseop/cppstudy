#include <iostream>

using namespace std;

int main(){

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            cout << 10 * i + j + 1 << '\t';
        }
        cout << endl;
    }
    return 0;
}