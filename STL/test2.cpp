#include <iostream>
#include <vector>
#include <algorithm>  // STL 알고리즘 헤더

int main() {
    std::vector<std::pair<int, char>> data = {{1, 'C'}, {2, 'B'}, {1, 'A'}, {3, 'D'}};

    // 문자 기준으로 정렬
    std::sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // 두 번째 요소인 char로 정렬
    });

    // 정렬된 결과 출력
    for (const auto& p : data) {
        std::cout << "{" << p.first << ", '" << p.second << "'}, ";
    }
    std::cout << std::endl;

    return 0;
}