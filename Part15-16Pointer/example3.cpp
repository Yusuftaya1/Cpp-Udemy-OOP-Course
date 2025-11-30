#include<iostream>
using namespace std;

int main() {
    int x ,y ,z=10 ,w=20;

    int *p = new int(5);
    delete p; // Free allocated memory

    p = &w; // p now points to w
    cout << "p:" << *p << endl;


    return 0;
}