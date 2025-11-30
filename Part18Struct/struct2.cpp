#include<iostream>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalamasi;
};

int main() {

    Ogrenci *ogrenciPtr = new Ogrenci;
    
    ogrenciPtr->ogrenciNo = 1001;
    ogrenciPtr->isim = "Ayse Yilmaz";
    ogrenciPtr->notOrtalamasi = 88.5;
    
    cout << "Ogrenci No: " << ogrenciPtr->ogrenciNo << endl;
    cout << "Isim: " << ogrenciPtr->isim << endl;
    cout << "Not Ortalamasi: " << ogrenciPtr->notOrtalamasi << endl;
    
    delete ogrenciPtr; // Free allocated memory


    /*Ogrenci ogrenci1 = {1001, "Ali Veli", 75.5};
    Ogrenci *pOgrenci1 = &ogrenci1;

    cout << "Ogrenci No: " << pOgrenci1->ogrenciNo << endl;
    cout << "Isim: " << pOgrenci1->isim << endl;
    cout << "Not Ortalamasi: " << pOgrenci1->notOrtalamasi << endl;*/

    return 0;
}