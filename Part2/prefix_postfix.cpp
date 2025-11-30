#include<iostream>

int main(){

    int x = 7;
    int y = x++; // Postfix increment
    std::cout << "After postfix increment:" << std::endl;
    std::cout << "x: " << x << std::endl; // x is now 6
    std::cout << "y: " << y << std::endl; // y is 5

    int a = 7;
    int b = ++a; // Prefix increment
    std::cout << "After prefix increment:" << std::endl;
    std::cout << "a: " << a << std::endl; // a is now 8
    std::cout << "b: " << b << std::endl; // b is 8

    return 0;
}