#include<iostream>
#include "ogrenci.h"
using namespace std;

// Constructor
Ogrenci::Ogrenci(string _isim, int _not1, int _not2) 
    : isim(_isim), not1(_not1), not2(_not2) {
    cout << "Ogrenci nesnesi olusturuldu: " << isim << endl;
}
