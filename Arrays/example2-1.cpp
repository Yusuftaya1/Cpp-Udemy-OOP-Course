#include <iostream>
using namespace std;

template<size_t rows, size_t cols>
void matrisToplama(const int (&matris1)[rows][cols], const int (&matris2)[rows][cols], int (&toplamMatris)[rows][cols]) {
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++){
            toplamMatris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}

template<size_t rows, size_t cols>
void matrisYazdir(const int (&matris)[rows][cols]) {    
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int satirSayisi = 3;
    const int sutunSayisi = 2;
    int matris1[satirSayisi][sutunSayisi];
    int matris2[satirSayisi][sutunSayisi];
    int toplamMatris[satirSayisi][sutunSayisi];

    cout << "Enter elements for the first matrix:" << endl;
    for (size_t i = 0; i < satirSayisi; i++){
        for (size_t j = 0; j < sutunSayisi; j++){
            cin >> matris1[i][j];
        }
    }
    
    cout << "Enter elements for the second matrix:" << endl;
    for (size_t i = 0; i < satirSayisi; i++){
        for (size_t j = 0; j < sutunSayisi; j++){
            cin >> matris2[i][j];
        }
    }
    matrisToplama(matris1, matris2, toplamMatris);
    cout << "Resultant Matrix after Addition:" << endl;
    matrisYazdir(toplamMatris);
    
    return 0;
}