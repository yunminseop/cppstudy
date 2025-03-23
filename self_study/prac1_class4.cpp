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

Car::Car():Car(9999){}

Car::Car(int p):price(p){
    cout << "이 차량의 가격이" << price << "만 원으로 초기화되었습니다." << endl;
}

double Car::calculate_RP(){
    return price * 0.8;
}

int main(){

    Car Avante;
    Car Sonata(3000);

    cout << "아반떼 가격: " << Avante.price << "만 원" << endl;
    cout << "소나타 가격: " << Sonata.price << "만 원" << endl;


    return 0;
}