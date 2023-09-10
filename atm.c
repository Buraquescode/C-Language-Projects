#include <stdio.h>

int main() {
    int balance = 50000, withdraw, deposit;
    int choice;

    while (1) {
        printf("ATM\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= withdraw;
                    printf("Remaining balance = %d\n", balance);
                }
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                balance += deposit;
                printf("New balance = %d\n", balance);
                break;
            case 3:
                printf("Balance = %d\n", balance);
                break;
            case 4:
                printf("Thank you for using the ATM\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

}

