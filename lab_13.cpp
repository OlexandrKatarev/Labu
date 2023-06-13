#include <iostream>

class Bank:
    def __init__(self):
        self.accounts = {}

    def addAccount(self, accountNumber, balance):
        self.accounts[accountNumber] = balance

    def getBalance(self, accountNumber):
        return self.accounts.get(accountNumber, "Account not found")

    def deposit(self, accountNumber, amount):
        if accountNumber in self.accounts:
            self.accounts[accountNumber] += amount
            return "Deposit successful"
        else:
            return "Account not found"

    def withdraw(self, accountNumber, amount):
        if accountNumber in self.accounts:
            if self.accounts[accountNumber] >= amount:
                self.accounts[accountNumber] -= amount
                return "Withdrawal successful"
            else:
                return "Insufficient balance"
        else:
            return "Account not found"

# Основна функція
def main():
    bank = Bank()

    # Додавання рахунків
    bank.addAccount("A123", 1000)
    bank.addAccount("B456", 500)
    bank.addAccount("C789", 2000)

    # Виведення балансу перед операціями
    print("Initial balances:")
    print("A123:", bank.getBalance("A123"))
    print("B456:", bank.getBalance("B456"))
    print("C789:", bank.getBalance("C789"))
    print()

    # Поповнення балансу
    bank.deposit("A123", 500)
    bank.deposit("B456", 1000)

    # Виведення балансу після поповнення
    print("Balances after deposits:")
    print("A123:", bank.getBalance("A123"))
    print("B456:", bank.getBalance("B456"))
    print("C789:", bank.getBalance("C789"))
    print()

    # Зняття грошей
    bank.withdraw("A123", 200)
    bank.withdraw("C789", 1500)

    # Виведення балансу після зняття
    print("Balances after withdrawals:")
    print("A123:", bank.getBalance("A123"))
    print("B456:", bank.getBalance("B456"))
    print("C789:", bank.getBalance("C789"))

# Виклик основної функції
main()
