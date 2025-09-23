#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char address_cin_ver[10];
    char address_getline_ver[10];

    int i;
    for(i = 0; i < 2; i ++){
        cout << i+1 << '.';
        cout << "주소를 입력하시오: ";
        if (i == 0){
            cin >> address_cin_ver;
        }
        else if (i == 1){
            cin >> address_getline_ver;
        }
    }

    cout << "입력하신 주소는 " << address_cin_ver << "입니다.(cin으로 입력받은 경우)\n";
    cout << "입력하신 주소는 " << address_getline_ver << "입니다.(getline으로 입력받은 경우)";

    return 0;
}