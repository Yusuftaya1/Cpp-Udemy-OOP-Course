#pragma once
#include <iostream>
#include <string>
using namespace std;

class Otomobil {
private:
    string renk;
    string model;
    int beygirGucu;

public:
    // Constructor
    Otomobil(string _renk, string _model, int _beygirGucu);

    // Getter fonksiyonları
    string getRenk() const;
    string getModel() const;
    int getBeygirGucu() const;

    // Setter fonksiyonları
    void setRenk(const string& _renk);
    void setModel(const string& _model);
    void setBeygirGucu(int _beygirGucu);

    // Bilgileri ekrana yazdırma
    void bilgileriGoster() const;
};
