#include <iostream>
using namespace std;

class Car{

    public:
    int price;
    int year;
    double mileage;
    Car();
    Car(int p);
    double calculate_RP();
    ~Car();
};

Car::Car(){
    cout << "생성자 함수 동작 확인" << endl;
}

Car::Car(int p):price(p){
    cout << "생성자 함수 동작 확인" << endl;
    cout << "이 차량의 가격이 " << price << "만 원으로 초기화되었습니다." << endl;
}

Car::~Car(){
    cout << "소멸자 함수 동작 확인" << endl;
}

double Car::calculate_RP(){
    return price * 0.8;
}

int main(){

    Car Avante;
    Car Sonata(3000);

    cout << "소나타의 가격은 " << Sonata.price << "만 원입니다." << endl;

    return 0;
}