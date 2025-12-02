#include<iostream>
#include<list>
using namespace std;

void printList(list<int> &listToPrint){
    list<int>::iterator itr;
    for(itr = listToPrint.begin(); itr != listToPrint.end(); ++itr)
        cout << *itr << " ";
    cout << endl;
}

int main(){
    list<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(30);

    cout << "Initial list: ";
    printList(numbers);
}