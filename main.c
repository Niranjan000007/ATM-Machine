#include <stdio.h>

#define MAX_PIN_TRIES 3
#define INITIAL_BALANCE 10000

int verify_pin(int correct_pin) {
    int attempts = 0, entered_pin;

    do {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin != correct_pin) {
            printf("Incorrect PIN. Please try again.\n");
            attempts++;
        }
    } while (entered_pin != correct_pin && attempts < MAX_PIN_TRIES);

    if (attempts == MAX_PIN_TRIES) {
        printf("Too many incorrect PIN attempts. Your card has been blocked.\n");
        return 0;
    }

    return 1;
}

void display_balance(int balance) {
    printf("\nYour current balance is: %d\n", balance);
}

void offer_services() {
    printf("\n\n\tBank services: \n");
    printf("1. We provide loans up to 1 lakh at a time.\n");
    printf("2. Other services will be notified later.\n");
}

int withdraw_cash(int balance) {
    int amount;

    printf("\nEnter the amount to withdraw (must be a multiple of 100): ");
    scanf("%d", &amount);

    if (amount % 100 == 0 || amount % 500 == 0 || amount % 2000 == 0) {
        if (balance >= amount + 1000) {
            balance -= amount;
            printf("Withdrawal successful. Your new balance is: %d\n", balance);
            return amount; // Return the withdrawn amount for mini statement
        } else {
            printf("\nYour account balance is low. Transaction cannot proceed.\n");
        }
    } else {
        printf("\nAmount is not a multiple of 100\n");
    }

    return 0; // Return 0 if withdrawal failed
}

void deposit_cash(int *balance) {
    int amount;

    printf("\nEnter the amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        *balance += amount;
        printf("Deposit successful. Your new balance is: %d\n", *balance);
    } else {
        printf("\nInvalid deposit amount.\n");
    }
}

int main() {
    int correct_pin = 1234; // Replace with your desired PIN
    int balance = INITIAL_BALANCE;
    char choice;

    if (verify_pin(correct_pin)) {
        do {
            printf("\n\nBANK OF INDIA\n");
            printf("\n1. Balance Inquiry\n");
            printf("2. Services\n");
            printf("3. Cash Withdrawal\n");
            printf("4. Cash Deposit\n"); // Add the deposit option
            printf("5. Exit\n");
            printf("\nEnter your choice: ");
            scanf(" %c", &choice); // Use space before %c to consume newline character

            switch (choice) {
                case '1':
                    display_balance(balance);
                    break;
                case '2':
                    offer_services();
                    break;
                case '3': {
                    int withdrawn_amount = withdraw_cash(balance);
                    break;
                }
                case '4':
                deposit_cash(&balance); // Update the balance after deposit
                    break;
                case '5':
                    printf("Thank you for using the ATM.\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != '5');
    }

    return 0;
}
