#include <iostream>
using namespace std;

// #define arrSIZE 5

int main()
{
    const int arrSIZE = 4; // Using const variable for array size
    int sinavNotlari[arrSIZE];
    double sinavAgirliklari[arrSIZE] = {0.15, 0.15, 0.30, 0.40};
    double agirlikliOrtalama[arrSIZE];
    double toplam = 0.0;

    for (int i = 0; i < arrSIZE; i++)
    {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> sinavNotlari[i];
    }

    for (int i = 0; i < arrSIZE; i++)
    {
        agirlikliOrtalama[i] = sinavNotlari[i] * sinavAgirliklari[i];
        toplam += agirlikliOrtalama[i];
    }
    cout << "Weighted Average: " << toplam << endl;

    
    return 0;
}