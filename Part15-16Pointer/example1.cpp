#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x; 
    int y = *p+8;
    int *z = &y;
    int w = *z + 5;

    cout << w << endl; 

    return 0;
}