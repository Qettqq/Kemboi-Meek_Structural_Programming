#include <stdio.h>

#define PIN 2375

float balance = 1000000.0;

int login();
void showMenu();
void checkBalance();
void deposit();
void withdraw();

int main(void)
{
    if (login())
    {
        int choice;

        do
        {
            showMenu();
            printf("Choose an option : ");
            scanf("%d", &choice);

            switch (choice)
            {
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
                    printf("Thank you for using the ATM. Goodbye!\n");
                    break;

                default:
                    printf("Invalid choice. Please try again.\n");
            }

        } while (choice != 4);
    }

    return 0;
}


int login()
{
    int enteredPin, attempts = 3;

    while (attempts > 0)
    {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == PIN)
        {
            printf("Login successful!\n");
            return 1;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("Access denied. Please contact your bank.\n");
    return 0;
}


void showMenu()
{
    printf("ATM MENU\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}


void checkBalance()
{
    printf("Current Balance: Ksh%.2f\n", balance);
}


void deposit()
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Deposit must be positive.\n");
    }
    else
    {
        balance = amount;
        printf("Deposited Ksh%.2f\n", amount);
        checkBalance();
    }
}


void withdraw()
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Amount must be positive.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient funds.\n");
    }
    else
    {
        balance -= amount;
        printf("Withdrawal successful: Ksh%.2f\n", amount);
        checkBalance();

    }

}
