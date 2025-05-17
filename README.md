# Simple-ATM-Machine-using-OOPs


This is a simple command-line **ATM Machine simulation** developed in Java. The project demonstrates basic banking operations such as balance checking, deposits, and withdrawals, and it also applies core **Object-Oriented Programming (OOPs)** concepts.

---

## 📌 Features

- 🔐 PIN verification (with max 3 attempts)
- 💰 Check account balance
- 💵 Deposit money
- 🏧 Withdraw money
- 🚪 Exit the ATM
- ❌ Handles invalid inputs (negative values, insufficient balance, etc.)

---

## 💡 Object-Oriented Programming (OOPs) Concepts Used

This project is built using core OOP principles:

| Concept | How It's Used |
|--------|----------------|
| **Class** | `ATM_Machine` class encapsulates all ATM functionalities like PIN check, balance handling, and transactions. |
| **Object** | An instance of `ATM_Machine` is created in the `ATM` class to interact with the ATM functions. |
| **Encapsulation** | Balance and PIN data are private to restrict direct access from outside the class. |
| **Abstraction** | Internal logic (e.g., deposit, withdraw) is hidden behind methods that provide a clean interface. |
| **Modularity** | Each functionality (check balance, deposit, withdraw, PIN check) is implemented in separate methods. |

> This project is a great way to practice OOP concepts while solving a real-world problem.

---

## 📂 Project Structure

- ATM.java  (Main method to run the program)
- ATM_Machine.java  (Contains ATM logic and OOP implementations)


---

## ▶️ How to Run

### 🛠 Requirements

- GCC/G++
- Any C++ IDE (like DEV C++, VS CODE) or terminal

### 💻 Run via Terminal

```bash
G++ ATM.java
./a.out
```

### Sample Output

Enter your PIN: 1234

==== ATM Main Menu ====
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1
Your current balance is: 0.0 Rs



###  👨‍💻 Author

- Made by Sayan Chowdhury
- Feel free to connect on LinkedIn or check out more projects.
- LinkedIn : www.linkedin.com/in/sayan-chowdhury-6b0a53281
