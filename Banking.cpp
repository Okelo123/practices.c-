#include <iostream>
#include <string>
#include <map>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    string password;  

public:
    BankAccount(string name, int number, double initialBalance, string pass) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
        password = pass;
    }

    string getPassword() const {
        return password;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        }
    }

    void displayBalance() {
        cout << "Account Information:" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

class BankSystem {
private:
    map<string, BankAccount> accounts;

public:
    bool authenticateUser(const string& username, const string& password) {
        map<string, BankAccount>::iterator it = accounts.find(username);
        return it != accounts.end() && it->second.getPassword() == password;
    }

    void createAccount(const string& username, const string& password, int accountNumber, double initialBalance) {
        BankAccount newAccount(username, accountNumber, initialBalance, password);  
        accounts.insert(pair<string, BankAccount>(username, newAccount));
        cout << "Account created successfully for user: " << username << endl;
    }

    BankAccount& getAccount(const string& username) {
        return accounts.find(username)->second;
    }
};

int main() {
    BankSystem bankSystem;

    bankSystem.createAccount("Juma_brian", "password123", 123456, 1000.0);

    if (bankSystem.authenticateUser("Juma_brian", "password123")) {
        cout << "Authentication successful." << endl;

        BankAccount& JumaAccount = bankSystem.getAccount("Juma_brian"); 
        JumaAccount.displayBalance();

        JumaAccount.deposit(500.0);
        JumaAccount.withdraw(200.0);
        JumaAccount.displayBalance();
    } else {
        cout << "Authentication failed. Invalid username or password." << endl;
    }

    return 0;
}
