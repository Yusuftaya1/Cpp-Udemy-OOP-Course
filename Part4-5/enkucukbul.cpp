#include<iostream>

using namespace std;

int main(){
    int minValue , sayi1, sayi2, sayi3;
    cin >> sayi1 >> sayi2 >> sayi3;

    if(sayi1 <= sayi2 && sayi1 <= sayi3){
        minValue = sayi1;
    }
    else if(sayi2 <= sayi1 && sayi2 <= sayi3){
        minValue = sayi2;
    }
    else{
        minValue = sayi3;
    }
    
    cout << "En kucuk sayi: " << minValue << endl;
    return 0;

}