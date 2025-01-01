#include <iostream>
#include <vector>
#include <algorithm>  // STL �˰��� ���

int main() {
    std::vector<std::pair<int, char>> data = {{1, 'C'}, {2, 'B'}, {1, 'A'}, {3, 'D'}};

    // ���� �������� ����
    std::sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // �� ��° ����� char�� ����
    });

    // ���ĵ� ��� ���
    for (const auto& p : data) {
        std::cout << "{" << p.first << ", '" << p.second << "'}, ";
    }
    std::cout << std::endl;

    return 0;
}