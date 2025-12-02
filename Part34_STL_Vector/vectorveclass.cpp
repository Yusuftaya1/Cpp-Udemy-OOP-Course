#include<iostream>
#include<vector>
using namespace std;


//Otomobil sınıfı
class Car{
private:
    string marka;
    string model;
    int yil;
public:
    Car(string _marka, string _model, int _yil)
        : marka(_marka), model(_model), yil(_yil) {}
    void display() const;
};

void Car::display() const {
    cout << "Marka: " << marka << ", Model: " << model << ", Yıl: " << yil << endl;
}

int main(){
    // Car nesnelerini tutacak vector
    vector<Car> vCars;
    vCars.emplace_back(Car("Toyota", "Corolla", 2020));
    vCars.emplace_back(Car("Honda", "Civic", 2019));
    vCars.emplace_back(Car("Ford", "Focus", 2018));

    // Vector içindeki Car nesnelerini yazdırma
    for(const Car &car : vCars){
        car.display();
    }

    // Eleman silme
    vCars.erase(vCars.begin() + 1); // 1. indexteki elemanı siler


    return 0;
}