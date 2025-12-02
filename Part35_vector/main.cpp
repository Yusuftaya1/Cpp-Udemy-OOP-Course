#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Personel{
private:
    int PersonelNo;
    string Isim;
    string Departman;
public:
    Personel(int pNo, string isim, string departman)
        : PersonelNo(pNo), Isim(isim), Departman(departman){}
    
    void display() const {
        cout << "Personel No: " << PersonelNo 
             << ", İsim: " << Isim 
             << ", Departman: " << Departman << endl;
    }
    int getPersonelNo() const {
        return PersonelNo;
    }
};

void ListPersonel(const vector<Personel> &personelList){
    for(const Personel &p : personelList){
        p.display();
    }
}

void AddPersonel(vector<Personel> &personelList){
    int pNo; string isim, departman;
    cout << "Personel No: "; cin >> pNo;
    cout << "İsim: "; getline(cin >> ws, isim);
    cout << "Departman: "; getline(cin >> ws, departman);
    personelList.emplace_back(pNo, isim, departman);
};

void RemovePersonel(vector<Personel> &personelList, size_t pNo){
    for(auto itr = personelList.begin(); itr != personelList.end(); itr++){
        if(itr->getPersonelNo == pNo){
            personelList.erase(itr);
        }
    }
    cout<<"Kayit Silindi"<<endl;
};

void SearchPersonel(const vector<Personel> &personelList , int pNo){
    for(const Personel &p : personelList){

        if (p.getPersonelNo() == pNo) {   // ← Kıyas burada yapılıyor
            cout << "=== Personel Bulundu ===\n";
            p.display();
            return;
        }
    }
    cout << "Personel bulunamadı!\n";
}

int main(){
    vector<Personel> personelList;
    
    personelList.emplace_back(Personel(101, "Ahmet Yılmaz", "Muhasebe"));
    personelList.emplace_back(Personel(102, "Ayşe Demir", "İnsan Kaynakları"));
    personelList.emplace_back(Personel(103, "Mehmet Kaya", "IT"));

    cout << "=== Personel Listesi ===" << endl;
    ListPersonel(personelList);

    SearchPersonel(personelList , 1013);
    //ListPersonel(personelList);

    return 0;
}