#include <iostream>
using namespace std;


class Car{

    private:
    int price;
    int year;
    double mileage;
    

    protected:
    int speed;
    

    public:
    int height;
    Car();
    Car(int p);
    Car(int p, int y, int m, int s);
    double calculate_RP();
    int show_price();
    int show_year();
    double show_mileage();
    int show_speed();

};

Car::Car():Car(9999, 9999, 9999, 9999){}

Car::Car(int p):price(p){
    cout << "이 차량의 가격이 " << price <<"만 원으로 초기화되었습니다." << endl;
}

Car::Car(int p, int y, int m, int s):price(p),year(y),mileage(m),speed(s){
    cout <<"가격: " << price <<"만 원, 연식: " << year << "년형, 연비: " << mileage << "km/l, 최고 속도: " << speed << "km/h" << "로 초기화 완료" << endl;
}

double Car::calculate_RP(){
    return price * 0.8;
}

int Car::show_price(){
    return price;
}

int Car::show_year(){
    return year;
}

double Car::show_mileage(){
    return mileage;
}

int Car::show_speed(){
    return speed;
}

int main(){

    Car Avante;
    Car Sonata(3000);
    Car Genesis(8000, 2024, 10.8, 250);

    cout << "Avante 가격: " << Avante.show_price() << ", 연식: " << Avante.show_year() << "년형, 연비: " << Avante.show_mileage() << "km/l" << endl;
    cout << "Sonata 가격: " << Sonata.show_price() << ", 연식: " << Sonata.show_year() << "년형, 연비: " << Sonata.show_mileage() << "km/l" << endl;
    cout << "Genesis 가격: " << Genesis.show_price() << ", 연식: " << Genesis.show_year() << "년형, 연비: " << Genesis.show_mileage() << "km/l, 최고 속도: " << Genesis.show_speed() << "km/h" << endl;

    return 0;
}