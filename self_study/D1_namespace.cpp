#include <iostream>
using namespace std;

namespace sum1{
    int sum(int a, int b){
        return (a + b)*(a - b);
    };
}

namespace sum2{
    int sum(int a, int b)
    {
        return a + b;
    }
}

int main(){
    int a = 5; int b = 7;
    int res = sum1::sum(a, b);
    cout << "res = " << res << endl;
    return 0;
}

// using namespace std 같이 이미 정의된 네임스페이스는 전역변수로 선언 가능, 하지만 코드 본문에서 정의하려고 하는 네임스페이스는 그냥 그 상태로만 가져다 써라.