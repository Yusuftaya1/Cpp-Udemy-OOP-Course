#include<iostream>
using namespace std;

class Otomobil {
private:
    string marka;
public:
    int yil;
    Otomobil(string _marka, int _yil) : marka(_marka), yil(_yil) {}
    friend void bilgiGoster(Otomobil car);
};

void bilgiGoster(Otomobil car) {
    // cout << "Marka: " << car.marka << endl; // Hata: 'marka' özel (private) üye erişilemez
    cout << "Yıl: " << car.yil << endl; // Geçerli: 'yil' genel (public) üye erişilebilir
    cout << "Marka: " << car.marka << endl; // Geçerli: 'marka' özel (private) üye erişilebilir çünkü bu fonksiyon friend olarak tanımlandı
}

int main (){
    Otomobil car1("Toyota", 2020);
    // cout << car1.marka << endl; // Hata: 'marka' özel (private) üye erişilemez
    cout << car1.yil << endl; // Geçerli: 'yil' genel (public) üye erişilebilir
    return 0;
}