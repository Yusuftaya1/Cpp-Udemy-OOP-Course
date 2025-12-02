#include<iostream>
#include<string>
#include<map>

using namespace std;

class Kitap{
private:
    string KitapAdi; 
    string KitapYazari;
    size_t RafNo;
public:
    Kitap(string _KitapAdi , string _KitapYazari , size_t _RafNo)
        : KitapAdi(_KitapAdi) , KitapYazari(_KitapYazari) , RafNo(_RafNo){}
    
    size_t getRafNo() const { return RafNo; }
    string getKitapAdi() const { return KitapAdi;}
    string getKitapYazari() const { return KitapYazari;}
};

void KitapEkle(map<size_t,Kitap> &mKitaplik){
    string ad, yazar;
    size_t raf;

    cout << "Kitap adi: ";
    getline(cin >> ws, ad);   // ws = whitespace temizler

    cout << "Kitap yazari: ";
    getline(cin >> ws, yazar);

    cout << "Raf numarasi: ";
    cin >> raf;

    // map'e ekle
    mKitaplik.emplace(raf, Kitap(ad, yazar, raf));

    cout << "Kitap basariyla eklendi!\n";
}

void KitaplariListele(const map<size_t,Kitap> &mKitaplik){
    for(const  auto &kitap : mKitaplik){
        cout << "Raf: " << kitap.first
             << " | Kitap: " << kitap.second.getKitapAdi()
             << " | Yazar: " << kitap.second.getKitapYazari() << endl;
    }
}

void KitapListele(const map<size_t,Kitap> &mKitaplik){
    for(auto itr = mKitaplik.begin();mKitaplik.end();itr++){
        int id = itr->first;
        const Kitap &kitap = itr->second;
        cout << "Raf: " << kitap.getRafNo()
             << "Yazar: " << kitap.getKitapYazari() 
             << "Kitap: " << kitap.getKitapAdi() << endl;
    }
}

void KitapSil(map<size_t,Kitap> &mKitaplik){
    int KNo;
    cout << "Silinecek Kitap No: ";
    cin >> KNo;
    mKitaplik.erase(KNo);
}

const Kitap *KitapArama(const map<size_t,Kitap> &mKitaplik, size_t kNO) {
    auto it = mKitaplik.find(kNO);
    if (it != mKitaplik.end()) {
        return &(it->second); // Kitabın adresini döndür
    }
    return nullptr; // bulunamazsa nullptr döndür
}

Kitap KitapAramaKopya(const map<size_t,Kitap> &mKitaplik, size_t kNO) {
    auto it = mKitaplik.find(kNO);
    if(it != mKitaplik.end()){
        return it->second;
    }
    return Kitap("", "", 0); // yoksa boş kitap döndür
}

const Kitap &KitapAramaRef(const map<size_t,Kitap> &mKitaplik, size_t kNO) {
    auto it = mKitaplik.find(kNO);
    if(it != mKitaplik.end()){
        return it->second;
    }
    throw runtime_error("Kitap bulunamadi!");   
}



int main (){
    map<size_t, Kitap> mKitaplik;

    mKitaplik.emplace(1, Kitap("Suç ve Ceza","Dostoyevski",1));
    mKitaplik.emplace(2, Kitap("Kürk Mantolu Madonna","Sabahattin Ali",2));

    while (true) {
        cout << "\n===== KUTUPHANE MENUSU =====\n";
        cout << "1) Kitap Ekle\n";
        cout << "2) Kitaplari Listele\n";
        cout << "3) Kitap Sil\n";
        cout << "4) Kitap Arama\n";
        cout << "5) Cikis\n";
        cout << "Secim: ";

        int secim;
        cin >> secim;

        switch(secim) {
            case 1:
                KitapEkle(mKitaplik);
                break;
            case 2:
                KitaplariListele(mKitaplik);
                break;
            case 3:
                KitapSil(mKitaplik);
                break;
            case 4: {
                size_t arananRaf;
                cout << "Aranan kitap raf numarasi: ";
                cin >> arananRaf;

                const Kitap *k = KitapArama(mKitaplik, arananRaf);
                if (k) {
                    cout << "Bulundu → Raf: " << k->getRafNo()
                        << " | Kitap: " << k->getKitapAdi()
                        << " | Yazar: " << k->getKitapYazari() << endl;
                } else {
                    cout << "Bu rafta kitap bulunamadi!\n";
                }
                break;
            }
            case 5:
                cout << "Programdan cikiliyor...\n";
                return 0;
            default:
                cout << "Gecersiz secim! Tekrar deneyin.\n";
        }
    }
    


}