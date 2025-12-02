#include<iostream>
#include<random>
using namespace std;

int main(){
    random_device rd;  // obtain a random number from hardware
    mt19937 motor(rd()); // seed the generator
    uniform_int_distribution<int> dist(1, 10); // define the range
    uniform_int_distribution<long> distLong(100, 1000); // define the range
    uniform_int_distribution<long long> distLongLong(1000, 10000); // define the range
    

    int randomNumber = dist(motor); // generate numbers


    return 0;
}