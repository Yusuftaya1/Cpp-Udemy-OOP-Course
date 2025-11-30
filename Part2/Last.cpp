#include<iostream>
#include<iomanip> // for std::setprecision and std::fixed
#include <cmath>
using namespace std;

double CalculateAverage(int grade1, int grade2, int grade3) {
    return (grade1 + grade2 + grade3) / 3.0;
}

double CalcFixedAverage(double avg) {
    cout << fixed << setprecision(2) << avg << endl; 
    return avg;
}

int main() {
    int Not1, Not2 , Not3;
    double Average , fixedAverage;
    cout << "Enter three grades: ";
    cin >> Not1 >> Not2 >> Not3;

    Average = CalculateAverage(Not1, Not2, Not3);
    cout << "Average returned: " << Average << endl;
    
    fixedAverage = CalcFixedAverage(Average);

    cout <<"Rounded " << round(fixedAverage) << endl;
    
    return 0;
}