#pragma once
#include <iostream>
using namespace std;

class Hayvan {
public:
    Hayvan(string _isim);
    void beslen();
    void uyku();
    string getIsim();

private:
    string isim;
};