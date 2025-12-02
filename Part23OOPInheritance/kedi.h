#pragma once
#include "hayvan.h"
class Kedi : public Hayvan {
public:
    Kedi(string _isim);
    ~Kedi();
    void miyav();
    static int getKediSayisi() {return KediSayisi;}

private:
    static int KediSayisi;
};