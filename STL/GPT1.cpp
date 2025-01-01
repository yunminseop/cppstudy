#include <iostream>
#include <random>
#include <array>
#include <utility> // std::pair< >을 사용하기 위한 라이브러리

using namespace std;

// 최소~최대 사이의 점수의 개수를 판별하기 위한 함수
int Check(int min_threshold, int max_threshold, array<double, 5> array);

// 최소 점수와 최대 점수를 구하는 함수
pair<double, double> Check(array<double, 5> score);


int main()
{

    array <double, 5> score = {};

    int min_threshold, max_threshold;

    for (int i = 0; i < score.size(); i++)
    {
        cout << "학생의 점수를 입력하시오: " << endl;
        cin >> score[i];
    }
    
    // 최저 및 최고 점수를 반환받기 위한 코드

    pair<double, double> result = Check(score);

    //--------------------------------------------------------------//

    // 최소 임계 점수와 최대 임계 점수를 전달하여 그 사이 속한 학생의 수를 구하는 코드
    cout << "=================범위 지정=================" << endl;

    cout << "최소 임계 점수를 \"정수로\" 입력하시오: " << endl;
    cin >> min_threshold;

    cout << "최대 임계 점수를 \"정수로\" 입력하시오:" << endl;
    cin >> max_threshold;

    int nums_in_scope = Check(min_threshold, max_threshold, score);
    
    //--------------------------------------------------------------//

    // 결과값 출력

    cout << "===================조회 결과===================" << endl;
    cout << "최저 점수는 " << result.first << "점 입니다." << endl;
    cout << "최고 점수는 " << result.second << "점 입니다." << endl;

    cout << "입력하신 범위 사이에는 총 " << nums_in_scope << "명의 학생이 있습니다." << endl;
    cout << "=============================================" << endl;


    return 0;
}


pair<double, double> Check(array<double, 5> score)
{
    double max = 0;
    double min = 100;

    pair<double, double> result;

    for (auto &each : score)
    {
        if (each > max)
        {
            max = each;
        }
    }
    for (auto &each : score)
    {
        if (each < min)
        {
            min = each;
        }
    }

    result.first = min;
    result.second = max;

    return result;
}

int Check(int min_threshold, int max_threshold, array<double, 5> array)
{
    int count = 0;

    for (auto &each : array)
    {
        if (each > min_threshold && each < max_threshold)
        {
            count ++;
        }
    }
    return count;
}