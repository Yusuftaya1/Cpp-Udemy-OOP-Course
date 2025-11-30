// 4 basamaklı ve rakamları birbirinden farklı kaç adet tam sayı olduğunu bulan program
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int birler, onlar, yuzler, binler;
    for (int i = 1000; i <= 9999; i++) {
        birler = i % 10;
        onlar = (i / 10) % 10;
        yuzler = (i / 100) % 10;
        binler = (i / 1000) % 10;

        if (birler != onlar && birler != yuzler && birler != binler &&
            onlar != yuzler && onlar != binler &&
            yuzler != binler) {
            count++;
        }
    }
    cout << "4 basamakli ve rakamlari birbirinden farkli tam sayi adedi: " << count << endl;
    
    return 0;
}



