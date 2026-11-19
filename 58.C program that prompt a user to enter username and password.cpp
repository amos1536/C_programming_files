#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(username, "ken") == 0 && strcmp(password, "1234") == 0) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Incorrect username or password. You have %d attempts left.\n", attempts - 1);
            attempts--;
        }
    }

    if (attempts == 0) {
        printf("You've exceeded the maximum number of attempts. Login failed.\n");
    }
return 0;
}
