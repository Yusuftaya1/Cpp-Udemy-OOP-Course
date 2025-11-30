//20 ila 40 arasındaki sayıların bütün bölenlerini bulan program
#include <iostream>
using namespace std;

int main() {
    for (int sayi = 20; sayi <= 40; sayi++) {
        cout << sayi << " sayisinin bolenleri: ";
        for (int i = 1; i <= sayi; i++) {
            if (sayi % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

        