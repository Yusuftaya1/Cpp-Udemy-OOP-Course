#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,float> mOgrenciNotlari;

    // Ekleme 
    mOgrenciNotlari[101] = 79.3;
    mOgrenciNotlari[102] = 68.7;
    mOgrenciNotlari[100] = 85.4;

    // insert ile ekleme
    mOgrenciNotlari.insert(104,94.6);

    // Listeleme
    for(const auto &ogrenci : mOgrenciNotlari){
        cout << "Ogr No : " << ogrenci.first << "Not: " << ogrenci.second << endl; 
    }

    // Search
    int arananOgrenciNo = 102;
    if(mOgrenciNotlari.find(arananOgrenciNo) != mOgrenciNotlari.end()){
        cout << mOgrenciNotlari[arananOgrenciNo];
    }

    // Silme 
    mOgrenciNotlari.erase(arananOgrenciNo);
}