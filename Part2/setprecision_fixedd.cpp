#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double deger = 123.456789;
    cout << "Varsayilan: " << deger << endl;
    cout << "setprecision(3): " << setprecision(3) << deger << endl;

    cout << fixed; // Sabit nokta gösterimi
    cout << "fixed ve setprecision(3): " << setprecision(3) << deger << endl;
    return 0;
}