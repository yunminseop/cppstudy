#include <iostream>
using namespace std;

int main() {
    while (true) {
        int f, s;
        char op;
        cout << "? ";
        if (!(cin >> f >> op >> s)) break; // 3 + 1 처럼 입력
        int result;
        switch(op) {
            case '+': result = f + s; break;
            case '-': result = f - s; break;
            case '*': result = f * s; break;
            case '/': result = s != 0 ? f / s : 0; break;
            default:  cout << "잘못된 연산자\n"; continue;
        }
        cout << f << ' ' << op << ' ' << s << " = " << result << '\n';
    }
    return 0;
}
