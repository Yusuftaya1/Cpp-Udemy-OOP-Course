#include<iostream>
using namespace std;

int* func(){
    int *p = new int;
    *p = 10;
    return p;
}

int main() {
    int *ptr = func();
    if (ptr != NULL) {
        cout << *ptr << endl;
        delete ptr;
    }
    return 0;
}