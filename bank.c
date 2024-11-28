#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void greeting();
int mainMenu();
void loginAccount();
void createAccount();
void forgotPassword();
void clearBuffer();

int main()
{  
    greeting();
    mainMenu();
}

void greeting()
{
    printf("\n\n-----\t Welcome to the Bank\t----- \n");
    printf("**************************************\n");
}

int mainMenu()
{
    printf("\t      Main Menu   \n");
    printf("--------------------------------------\n");
    printf("1. Login to your account\n");
    printf("2. Create an account\n");
    printf("3. Forgot Password\n");
    printf("--------------------------------------\n\n");

    int selection;
    printf("Select Option: ");
    scanf("%d", &selection);

    switch(selection)
    {
        case 1:

            loginAccount();
            break;
        case 2:
            createAccount();
            break;
        case 3:
            forgotPassword();
            break;
        default:
            break;
    }
}

void loginAccount()
{   
    char username[100];
    char password[100];

    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';
    clearBuffer();


    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';
    clearBuffer();

}
void createAccount()
{

}
void forgotPassword()
{

}

void clearBuffer()
{
    while(getchar() != '\n');
}