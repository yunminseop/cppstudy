#include <iostream>
using namespace std;

class Car{

    public:
    int price;
    int year;
    double mileage;

};

int main(){
    Car Sonata;
    Car Genesis;

    Sonata.price = 3000;
    Sonata.year = 2024;
    Sonata.mileage = 14.4;

    Genesis.price = 8000;
    Genesis.year = 2024;
    Genesis.mileage = 10.2;


    cout <<"==================="<< endl;

    cout << "가격(만 원): " << Sonata.price << endl;
    cout << "연식: " << Sonata.year << endl;
    cout << "연비: " << Sonata.mileage << "km/l" << endl;

    cout <<"==================="<< endl;
    
    cout << "가격(만 원): " << Genesis.price << endl;
    cout << "연식: " << Genesis.year << endl;
    cout << "연비: " << Genesis.mileage << "km/l" << endl;

    cout <<"==================="<< endl;

    return 0;
}