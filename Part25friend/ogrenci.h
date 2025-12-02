#pragma once
#include <iostream>
using namespace std;

class Ogrenci {
private:
    string isim;
    int not1;
    int not2;
public:
    // Constructor
    Ogrenci(string _isim, int _not1, int _not2);
    friend class Hesaplayici;
};