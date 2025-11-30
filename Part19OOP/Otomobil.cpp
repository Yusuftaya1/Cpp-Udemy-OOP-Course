#include "Otomobil.h"

// Constructor - Initialization list
Otomobil::Otomobil(string _renk, string _model, int _beygirGucu)
    : renk(_renk), model(_model), beygirGucu(_beygirGucu) {}

// Getter
string Otomobil::getRenk() const { return renk; }
string Otomobil::getModel() const { return model; }
int Otomobil::getBeygirGucu() const { return beygirGucu; }

// Setter
void Otomobil::setRenk(const string& _renk) { renk = _renk; }
void Otomobil::setModel(const string& _model) { model = _model; }
void Otomobil::setBeygirGucu(int _beygirGucu) {
    if (_beygirGucu > 0)  // güvenlik kontrolü
        beygirGucu = _beygirGucu;
}

// Bilgileri ekrana yazdırma
void Otomobil::bilgileriGoster() const {
    cout << "Model: " << getModel() << endl;
    cout << "Renk: " << getRenk() << endl;
    cout << "Beygir Gucu: " << getBeygirGucu() << " HP" << endl;
}
