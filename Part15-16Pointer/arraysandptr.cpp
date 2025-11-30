#include<iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *p = numbers;

    cout << numbers << endl;
    cout << &numbers[0] << endl;
    cout << p << endl;

    *(p + 2) = 100; 
    cout << numbers[2] << endl;

    return 0;
}