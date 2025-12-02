#include<iostream>
#include<vector>
using namespace std;
/*
int main(){
    vector<int> vNumbers;   
    vNumbers.push_back(3);
    vNumbers.push_back(5);
    vNumbers.push_back(8);

    cout << "Vector boyutu: " << vNumbers.size() << endl;

    vNumbers.insert(vNumbers.begin() + 1, 10); // 1. index'e 10 ekle

    for(const auto &num : vNumbers)
        cout << "Sayı: " << num << endl;

    for(size_t i=0; i<vNumbers.size(); i++)
        cout << "Eleman " << i << ": " << vNumbers[i] << endl; // veya vNumbers.at(i)

    vector<string> vCars = {"Volvo", "BMW", "Ford"};
    vCars.push_back("Audi");

    for(const auto &car : vCars)
        cout << "Araba: " << car << endl;
}*/

int main(){
    vector<int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);

    for(size_t i=0; i<vNumbers.size(); i++){
        vNumbers[i] += 5;
    }

    for(int num : vNumbers){
        num += 2;
    }

    for(size_t i=0; i<vNumbers.size(); i++){
        cout << "Eleman " << i << ": " << vNumbers.at(i) << endl;
    }

    for(const int &num : vNumbers){
        cout << "Sayı: " << num << endl;
    }
    
    // son elemani silme
    vNumbers.pop_back();

    //aradan elemani silme
    vNumbers.erase(vNumbers.begin() + 2); // 2. indexteki elemani siler
}