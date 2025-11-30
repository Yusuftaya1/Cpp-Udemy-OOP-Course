#include <iostream>
using namespace std;

bool asalMi(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) { // for (int i = 2; i * i <= n; i++) is more efficient
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    cout << "Asal sayilar: ";
    for (int num = 2; num <= sayi; num++) {
        if (asalMi(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
