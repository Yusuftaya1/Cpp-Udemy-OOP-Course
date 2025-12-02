#include <iostream>
using namespace std;

class Square {
private:
    double side;
public:
    // Constructor
    Square(double s) : side(s) {}

    // Overload + operator to add areas of two squares
    double operator+(const Square &other) {
        return (side * side) + (other.side * other.side);
    }

    // Overoad << operator to display area
    friend ostream& operator<<(ostream &out, const Square &sq) {
        out << "Area: " << (sq.side * sq.side);;
        return out;
    }
};