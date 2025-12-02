#include<iostream>
using namespace std;

struct BankAccount {
private:
    double balance;
public:
    // Constructor
    BankAccount(double initialBalance) : balance(initialBalance) {}
     // Destructor
    ~BankAccount() {
        cout << "BankAccount destructor called. Final balance was: " << balance << endl;
    }

    double getBalance(){return balance;}

    double deposit(double amount){
        balance += amount;
        return balance;
    }
    
    double withdraw(double amount){
        if(amount > balance){
            cout << "Insufficient funds!" << endl;
            return balance;
        }
        balance -= amount;
        return balance;
    }
};

int main() {
    cout << "=== BANK ACCOUNT STRUCTURE EXAMPLE ===" << endl;

    BankAccount *myAccount = new BankAccount(1000.0);

    cout << "Initial Balance: " << myAccount->getBalance() << endl;
    myAccount->deposit(500.0);
    cout << "Balance after deposit: " << myAccount->getBalance() << endl;
    myAccount->withdraw(200.0);
    cout << "Balance after withdrawal: " << myAccount->getBalance() << endl;

    delete myAccount; // Destructor called here
    return 0;
}