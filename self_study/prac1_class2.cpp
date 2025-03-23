#include <iostream>
using namespace std;

class Car{

    public:
    int price;
    int year;
    double mileage;
    double calculate_RP();
};

double Car::calculate_RP(){
    return price * 0.8 ;
}
int main(){
    Car Sonata;

    Sonata.price = 3000;
    Sonata.year = 2024;
    Sonata.mileage = 14.4;

    cout << "소나타의 중고가는 " << Sonata.calculate_RP() << "만 원 입니다. " << endl;

    return 0;
}