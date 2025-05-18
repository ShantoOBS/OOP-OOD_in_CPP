// Smart Banking System - Full OOP Implementation in C++
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <exception>
using namespace std;

// Base Class
class Person {
protected:
    string person_name;
    string person_phone;
    int person_age;
public:
    Person(string name, string phone, int age) {
        person_name = name;
        person_phone = phone;
        person_age = age;
    }
    virtual void displayPersonInformation() const {
        cout << "Name: " << person_name << endl;
        cout << "Phone: " << person_phone << endl;
        cout << "Age: " << person_age << endl;
    }
};

// Abstract Class
class BankAccount : public Person {
protected:
    int account_number;
    double account_balance;
public:
    BankAccount(string name, string phone, int age, int accountNumber)
        : Person(name, phone, age), account_number(accountNumber), account_balance(0.0) {}

    virtual void depositAmount(double amount) {
        account_balance += amount;
    }

    virtual void withdrawAmount(double amount) {
        if (amount > account_balance) {
            throw runtime_error("Insufficient balance for withdrawal.");
        }
        account_balance -= amount;
    }

    virtual void displayAccountInformation() const = 0; // Pure virtual function

    virtual double calculateInterest() = 0; // Pure virtual function

    int getAccountNumber() const {
        return account_number;
    }
};

// Derived Class - Savings Account
class SavingsBankAccount : public BankAccount {
public:
    SavingsBankAccount(string name, string phone, int age, int accountNumber)
        : BankAccount(name, phone, age, accountNumber) {}

    double calculateInterest() override {
        return account_balance * 0.04; // 4% interest
    }

    void displayAccountInformation() const override {
        displayPersonInformation();
        cout << "Account Type: Savings" << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Balance: $" << account_balance << endl;
    }
};

// Derived Class - Current Account
class CurrentBankAccount : public BankAccount {
public:
    CurrentBankAccount(string name, string phone, int age, int accountNumber)
        : BankAccount(name, phone, age, accountNumber) {}

    double calculateInterest() override {
        return 0.0; // No interest for current accounts
    }

    void displayAccountInformation() const override {
        displayPersonInformation();
        cout << "Account Type: Current" << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Balance: $" << account_balance << endl;
    }
};

// Template Function
template <typename T>
T calculateGenericInterest(T principalAmount, T interestRate, int numberOfYears) {
    return (principalAmount * interestRate * numberOfYears) / 100;
}

// Custom Exception Class
class InvalidTransactionException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid transaction encountered!";
    }
};

// Bank System Class
class BankSystem {
private:
    vector<BankAccount*> list_of_accounts;
    int next_account_number = 1001;

public:
    void createNewAccount() {
        string customer_name, customer_phone;
        int customer_age, account_type_choice;

        cout << "Enter Name: ";
        getline(cin >> ws, customer_name);
        cout << "Enter Phone: ";
        cin >> customer_phone;
        cout << "Enter Age: ";
        cin >> customer_age;
        cout << "Choose Account Type (1 for Savings, 2 for Current): ";
        cin >> account_type_choice;

        if (account_type_choice == 1) {
            list_of_accounts.push_back(new SavingsBankAccount(customer_name, customer_phone, customer_age, next_account_number++));
        } else if (account_type_choice == 2) {
            list_of_accounts.push_back(new CurrentBankAccount(customer_name, customer_phone, customer_age, next_account_number++));
        } else {
            throw InvalidTransactionException();
        }

        cout << "Account successfully created.\n";
    }

    void depositToAccount(int target_account_number, double deposit_amount) {
        for (auto account : list_of_accounts) {
            if (account->getAccountNumber() == target_account_number) {
                account->depositAmount(deposit_amount);
                cout << "Deposit successful.\n";
                return;
            }
        }
        throw InvalidTransactionException();
    }

    void withdrawFromAccount(int target_account_number, double withdraw_amount) {
        for (auto account : list_of_accounts) {
            if (account->getAccountNumber() == target_account_number) {
                account->withdrawAmount(withdraw_amount);
                cout << "Withdrawal successful.\n";
                return;
            }
        }
        throw InvalidTransactionException();
    }

    void showAllAccountsInformation() {
        for (auto account : list_of_accounts) {
            account->displayAccountInformation();
            cout << "Interest: $" << account->calculateInterest() << endl;
            cout << "------------------------\n";
        }
    }
};

int main() {
    BankSystem main_bank_system;
    int user_choice;

    while (true) {
        cout << "\n------ Smart Banking System Menu ------" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Deposit Amount" << endl;
        cout << "3. Withdraw Amount" << endl;
        cout << "4. Show All Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> user_choice;

        try {
            if (user_choice == 1) {
                main_bank_system.createNewAccount();
            } else if (user_choice == 2) {
                int account_number;
                double deposit_amount;
                cout << "Enter Account Number: ";
                cin >> account_number;
                cout << "Enter Amount to Deposit: ";
                cin >> deposit_amount;
                main_bank_system.depositToAccount(account_number, deposit_amount);
            } else if (user_choice == 3) {
                int account_number;
                double withdrawal_amount;
                cout << "Enter Account Number: ";
                cin >> account_number;
                cout << "Enter Amount to Withdraw: ";
                cin >> withdrawal_amount;
                main_bank_system.withdrawFromAccount(account_number, withdrawal_amount);
            } else if (user_choice == 4) {
                main_bank_system.showAllAccountsInformation();
            } else if (user_choice == 5) {
                break;
            } else {
                throw InvalidTransactionException();
            }
        } catch (exception& error) {
            cout << "Error: " << error.what() << endl;
        }
    }

    return 0;
}
