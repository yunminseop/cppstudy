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
};

Car::Car(){
    cout << "이 차량은 아무 정보도 초기화되지 않았습니다." << endl;
}

Car::Car(int p){
    price = p;
    cout << "이 차량의 가격이 " << price << "만 원으로 초기화되었습니다." << endl;
}

double Car::calculate_RP(){
    return price * 0.8;
}

int main(){

    Car Avante;
    Car Sonata(3000);

    cout << "소나타의 가격은 " << Sonata.price << "만 원입니다." << endl;

    cout << "별도로 초기화하지 않은 변수 year과 mileage는 각각 " << Sonata.year << ", " << Sonata.mileage << "가 됩니다." << endl;

    return 0;
}