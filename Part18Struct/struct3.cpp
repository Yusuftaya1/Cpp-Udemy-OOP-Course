#include<iostream>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalamasi;
};

int main() {
    size_t ogrenciSayisi;
    cout << "Kac ogrenci kaydi yapacaksiniz? ";
    cin >> ogrenciSayisi;

    Ogrenci *ogrenciPtr = new Ogrenci[ogrenciSayisi];

    for (size_t i = 0; i < ogrenciSayisi; ++i) {

        cout << "Ogrenci No: ";
        cin >> ogrenciPtr[i].ogrenciNo;
        cin.ignore(); 
        
        cout << "Isim: ";
        getline(cin, ogrenciPtr[i].isim);

        cout << "Not Ortalamasi: ";
        cin >> ogrenciPtr[i].notOrtalamasi;
    }

    cout << "\nGirilen Ogrenci Bilgileri:\n";
    for (size_t i = 0; i < ogrenciSayisi; ++i) {
        cout << "Ogrenci No: " << ogrenciPtr[i].ogrenciNo << endl;
        cout << "Isim: " << ogrenciPtr[i].isim << endl;
        cout << "Not Ortalamasi: " << ogrenciPtr[i].notOrtalamasi << endl;
        cout << "------------------------" << endl;
    }
    delete[] ogrenciPtr; // Free allocated memory
    return 0;
}