#include<iostream>
#include "ogrenci.h"
using namespace std;

class Hesaplayici {
public:
    void hesaplaOrtalama(Ogrenci ogrenci){
        int ortalama = (ogrenci.not1 + ogrenci.not2) / 2;
        cout << ogrenci.isim << " isimli ogrencinin ortalamasi: " << ortalama << endl;
    };
};