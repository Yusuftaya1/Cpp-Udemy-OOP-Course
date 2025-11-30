#include<iostream>
using namespace std;

int main() {
    int a[5] , *p , z;
    for (size_t i = 0; i < 5; i++){
        a[i] = i * i; // 0,1,4,9,16
    }
    p = a;
    z = *(p + 1) + *(a + 2);
    cout << z << endl;

    

    return 0;
}