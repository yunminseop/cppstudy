#include <iostream>
#include <cmath>
#include <array>

using namespace std;

int main(){

    int x = 8;
    int y = 10;
    double z = (int)24.8;

    double res = (double) x/ y;
    double res2 = ceil(z);

    array <int ,9> arr = {};
    arr = {1,2,3,4,5,6,7,8,9};

    for(auto & i: arr){
        cout << i << endl;
    }

    cout << z << endl;

    return 0;
}