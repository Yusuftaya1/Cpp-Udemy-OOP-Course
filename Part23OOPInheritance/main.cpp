#include<iostream>
#include "hayvan.h"
#include "kedi.h"

using namespace std;

int main() {
    Hayvan kedi("Minnak");
    kedi.beslen();
    kedi.uyku();

    Kedi pamuk("Pamuk");
    pamuk.beslen();
    pamuk.miyav();
    pamuk.uyku();

    cout << "Toplam kedi sayısı: " << Kedi::getKediSayisi() << endl;

}