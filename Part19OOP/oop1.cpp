#include <iostream>
#include "Otomobil.h"
using namespace std;

int main() {
    Otomobil araba1("Kirmizi", "Toyota", 130);
    Otomobil araba2("Mavi", "Honda", 150);

    araba1.bilgileriGoster();
    cout << endl;
    araba2.bilgileriGoster();

    // Setter ile değişiklik
    araba1.setBeygirGucu(160);
    cout << "\nAraba1 güncel bilgileri:" << endl;
    araba1.bilgileriGoster();

    return 0;
}
