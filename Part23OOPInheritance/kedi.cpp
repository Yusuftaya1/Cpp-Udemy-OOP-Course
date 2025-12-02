#include "kedi.h"

int Kedi::KediSayisi = 0;

Kedi::Kedi(string _isim) : Hayvan(_isim) {
    KediSayisi++;
}

Kedi::~Kedi() {
    KediSayisi--;
}


void Kedi::miyav() {
    cout << getIsim() << " miyavlıyor." << endl;
}