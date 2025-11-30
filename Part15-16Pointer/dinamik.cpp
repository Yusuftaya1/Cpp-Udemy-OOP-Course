#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Girilecek sayi adedi: ";
    cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    delete[] arr;
    
    return 0;
}