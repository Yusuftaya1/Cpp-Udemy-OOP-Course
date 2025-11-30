#include<iostream>
using namespace std;


void matrisToplama(int matris1[3][2], int matris2[3][2], int toplamMatris[3][2]) {
    for (int i = 0; i < 3; i++){
        for (size_t j = 0; j < 2; j++){
            toplamMatris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}

int main() {
    const int satirSayisi = 3;
    const int sutunSayisi = 2;
    int matris1[satirSayisi][sutunSayisi];
    int matris2[satirSayisi][sutunSayisi];
    int toplamMatris[satirSayisi][sutunSayisi];

    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < satirSayisi; i++){
        for (size_t j = 0; j < sutunSayisi; j++){
            cin >> matris1[i][j];
        }
    }
    
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < satirSayisi; i++){
        for (size_t j = 0; j < sutunSayisi; j++){
            cin >> matris2[i][j];
        }
    }
    matrisToplama(matris1, matris2, toplamMatris);
    cout << "Resultant Matrix after Addition:" << endl;
    for (int i = 0; i < satirSayisi; i++){
        for (size_t j = 0; j < sutunSayisi; j++){
            cout << toplamMatris[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}