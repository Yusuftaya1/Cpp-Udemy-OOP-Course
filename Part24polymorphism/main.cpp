#include<iostream>

class Hayvan {
public:
    virtual void sesCikar(){
        std::cout << "Hayvan ses çıkarıyor." << std::endl;
    }

    void bilgiGoster(){
        std::cout << "Bu bir bilgi metodu." << std::endl;
    }

    
};

class Kedi : public Hayvan {
public:
    void sesCikar(){
        std::cout << "Miyav!" << std::endl;
    }
    void bilgiGoster(){
        std::cout << "Bu bir kedi bilgisi metodudur." << std::endl;
    }

};

class Kopek : public Hayvan {
public:
    void sesCikar(){
        std::cout << "hav!" << std::endl;
    }
    void bilgiGoster(){
        std::cout << "Bu bir kopek bilgisi metodudur." << std::endl;
    }
    
};

void ucKezSesCikar(Hayvan *h){
        h->sesCikar();
        h->sesCikar();
        h->sesCikar();
}  

int main() {
    /*
    Hayvan *phayvan;
    Kedi kedi;
    phayvan = &kedi;
    phayvan->sesCikar();      // Polymorphism: Kedi'nin sesCikar() metodu çağrılır
    phayvan->bilgiGoster();   // Hayvan'ın bilgiGoster() metodu çağrılır

    Kopek kopek;
    phayvan = &kopek;
    phayvan->sesCikar();      // Polymorphism: Kopek'in sesCikar() metodu çağrılır
    phayvan->bilgiGoster();   // Hayvan'ın bilgiGoster() metodu çağrılır

    ucKezSesCikar(&kedi);  // Kedi'nin sesCikar() metodu üç kez çağrılır
    ucKezSesCikar(&kopek); // Kopek'in sesCikar() metodu üç kez çağrılır
    */
   Kopek karabas;
   ucKezSesCikar(&karabas);

   

    return 0;
}