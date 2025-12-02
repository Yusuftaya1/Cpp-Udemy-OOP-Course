#include "hayvan.h"

Hayvan::Hayvan(string _isim): isim(_isim) {
    
}

void Hayvan::beslen() {
    cout<<Hayvan::isim << " besleniyor." << endl;
}
void Hayvan::uyku() {
    cout << Hayvan::isim << " uyuyor." << endl;
}
string Hayvan::getIsim() {
    cout << "Hayvanın ismi: " << Hayvan::isim << endl;
    return Hayvan::isim;
}
