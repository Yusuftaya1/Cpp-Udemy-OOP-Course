#include<iostream>
using namespace std;

int main(){
    string isim = "AaronErtsafgjhv gnlkmşşsgfdfr"; //32byte
    int dogumYili = 1990; //4byte
    float notOrtalamasi = 3.45f; //4byte
    double piSayisi = 3.141592653589793; //8byte
    bool isGraduated = true; //1byte
    char grade = 65; //1byte
    int quiz1 = 65;
    int quiz2 = 72;
    float quizOrtalama = (quiz1 + quiz2) / 2.0f;

    cout << "Isim: " << isim << " "<< sizeof(isim)<<endl;
    cout << "Dogum Yili: " << dogumYili << " "<< sizeof(dogumYili) << endl;
    cout << "Not Ortalamasi: " << notOrtalamasi << " "<<  sizeof(notOrtalamasi) << endl;
    cout << "Pi Sayisi: " << piSayisi << " "<<  sizeof(piSayisi) << endl;
    cout << "Is Graduated: " << isGraduated << " "<<  sizeof(isGraduated) << endl;
    cout << "Grade: " << grade << " "<<  sizeof(grade) << endl;
    cout << "Quiz Ortalamasi: " << quizOrtalama << " "<<  sizeof(quizOrtalama) << endl;

    return 0;
}