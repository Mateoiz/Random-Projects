#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char name[100];
    float balance;
} Account;

void createAccount(Account *account, int *isAccountCreated) {
    printf("Enter account number: ");
    scanf("%d", &account->accountNumber);
    printf("Enter name: ");
    scanf("%s", account->name);
    account->balance = 0.0;
    *isAccountCreated = 1;
    printf("Account created successfully!\n");
}

void deposit(Account *account, float amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposited %.2f successfully!\n", amount);
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw(Account *account, float amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Withdrew %.2f successfully!\n", amount);
    } else {
        printf("Invalid amount or insufficient balance!\n");
    }
}

void displayAccount(const Account *account) {
    printf("Account Number: %d\n", account->accountNumber);
    printf("Name: %s\n", account->name);
    printf("Balance: %.2f\n", account->balance);
}

int main() {
    Account account;
    int choice;
    float amount;
    int isAccountCreated = 0;

    while (1) {
        printf("\nBanking System Menu:\n");
        if (!isAccountCreated) {
            printf("1. Create Account\n");
            printf("5. Exit\n");
        } else {
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Display Account\n");
            printf("5. Exit\n");
        }
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (!isAccountCreated && choice != 1 && choice != 5) {
            printf("Please create an account first!\n");
            continue;
        }

        switch (choice) {
            case 1:
                createAccount(&account, &isAccountCreated);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 4:
                displayAccount(&account);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
