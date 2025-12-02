#include<iostream>

using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex &other){
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload * operator
    Complex operator*(const Complex &other){
        return Complex(real*other.real -imag*other.imag,
                       real*other.imag + imag*other.real);
    }

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};


int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);

    Complex c3 = c1 + c2; // Using overloaded + operator
    Complex c4 = c1 * c2; // Using overloaded * operator

    // Display results
    cout << "c1 + c2 = ";
    c3.display();
    cout << "c1 * c2 = ";
    c4.display();

    return 0;
}