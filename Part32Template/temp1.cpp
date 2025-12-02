#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b){
    return a + b;
}

template<typename T>
T subtract(T a, T b){
    return a - b;
}

template <typename T>
class Kare{
private:
    T kenar;
public:
    Kare(T k): kenar(k) {}
    T alan() const {
        return kenar * kenar;
    }

    void display() const {
        cout << "Kenar: " << kenar << ", Alan: " << alan() << endl;
    }
};

template<typename T>
class Dikdortgen{
private:
    T uzunKenar;
    T kisaKenar;
public:
    Dikdortgen(T uk, T kk): uzunKenar(uk), kisaKenar(kk) {}
    T alan() const {
        return uzunKenar * kisaKenar;
    }   
    void display() const {
        cout << "Uzun Kenar: " << uzunKenar << ", Kisa Kenar: " << kisaKenar << ", Alan: " << alan() << endl;
    }
};

int main(){
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 10.5;

    cout << "Integer addition: " << add(int1, int2) << endl;
    cout << "Double addition: " << add(double1, double2) << endl;

    Kare<int> kareInt(4);
    Kare<double> kareDouble(4.5);
    kareInt.display();
    kareDouble.display();

    return 0;
}