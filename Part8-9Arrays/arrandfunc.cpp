#include<iostream>
using namespace std;

void diziArtirma(int dizi[],size_t boyut, int artisMiktari = 10) {
    for (size_t i = 0; i < boyut; i++) {
        dizi[i] += artisMiktari;
    }
}

int main() {
    int dizi[] = {13, 28, 14, 47, 5 ,1 ,39};
    diziArtirma(dizi,7, 5);
    return 0;
}