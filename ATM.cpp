#include <iostream>
using namespace std;

class ATM_Machine {
private:
    float balance;
    int count;
    const int pin = 1234;

public:
    ATM_Machine() : balance(0), count(0) {}

    void checkPin() {
        while (count < 3) {
            cout << "Enter your PIN: ";
            int enteredPin;
            cin >> enteredPin;
            
            if (enteredPin == pin) {
                mainMenu();
                return; // exit once PIN is correct and main menu is done
            } else {
                count++;
                cout << "Incorrect PIN! Attempts left: " << (3 - count) << endl;
            }
        }
        
        cout << "Too many incorrect attempts. Your account is locked." << endl;
    }

    void mainMenu() {
        while (true) {
            cout << "\n==== ATM Main Menu ====" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            
            int choice;
            cin >> choice;
            
            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    cout << "Thank you for using our ATM. Goodbye!" << endl;
                    return; // exit the method
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    void checkBalance() {
        cout << "Your current balance is: " << balance << " Rs" << endl;
    }

    void deposit() {
        cout << "Enter amount to deposit: ";
        float amount;
        cin >> amount;
        if (amount <= 0) {
            cout << "Invalid amount." << endl;
        } else {
            balance += amount;
            cout << amount << " Rs deposited successfully." << endl;
        }
    }

    void withdraw() {
        cout << "Enter amount to withdraw: ";
        float amount;
        cin >> amount;
        if (amount <= 0) {
            cout << "Invalid amount." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << amount << " Rs withdrawn successfully." << endl;
        }
    }
};

int main() {
    ATM_Machine obj;
    obj.checkPin();
    return 0;
}