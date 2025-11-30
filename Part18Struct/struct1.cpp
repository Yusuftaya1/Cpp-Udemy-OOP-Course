#include<iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalamasi;
};

void gecmeDurumuYazdir(Ogrenci &ogr) {
    if (ogr.notOrtalamasi > 50)
        cout << "Gecti" << endl;
    else
        cout << "Kaldi" << endl;
}

//tek bir ogrenci bilgisi yazdirma fonksiyonu
void ogrenciBilgisiYazdir(Ogrenci &ogr) {
    cout << "Ogrenci No: " << ogr.ogrenciNo << endl;
    cout << "Isim: " << ogr.isim << endl;
    cout << "Not Ortalamasi: " << ogr.notOrtalamasi << endl;
    cout << "Durum: ";
    gecmeDurumuYazdir(ogr);
    cout << "------------------------" << endl;
}

//Tüm ogrenci bilgilerini yazdirma fonksiyonu
void tumOgrencileriYazdir(Ogrenci ogrenciler[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Ogrenci No: " << ogrenciler[i].ogrenciNo << endl;
        cout << "Isim: " << ogrenciler[i].isim << endl;
        cout << "Not Ortalamasi: " << ogrenciler[i].notOrtalamasi << endl;
        cout << "Durum: ";
        gecmeDurumuYazdir(ogrenciler[i]);
        cout << "--------------------" << endl;
    }
}


int main() {
    Ogrenci ogrenciler[3] = {
        {1001, "Mehmet Yilmaz", 85.5},
        {1002, "Zeynep Kaya", 40.0},
        {1003, "Ahmet Demir", 78.0}
    };

    /*Ogrenci ogrenciler[3];
    ogrenciler[0] = {1001, "Mehmet Yilmaz", 85.5};
    ogrenciler[1] = {1002, "Zeynep Kaya", 40.0};
    ogrenciler[2] = {1003, "Ahmet Demir", 78.0};*/

    tumOgrencileriYazdir(ogrenciler, 3);


    //ogrenciBilgisiYazdir(ogrenciler[0]);
    
    /*Ogrenci ogr1;
    ogr1.ogrenciNo = 12345;
    ogr1.isim = "Ali Veli";
    ogr1.notOrtalamasi = 88.5;

    Ogrenci ogr2 = {67890, "Ayse Fatma", 92.0};*/
    return 0;
}