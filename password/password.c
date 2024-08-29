// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    char text;
    int count = 1;
    int check[4] = {0, 0, 0, 0};
    int length = strlen(password);
    for (int i = 0; i < length; i++)
    {
        text = password[i];
        if (isupper(text) != 0)
        {
            check[0]++;
        }
        else if (islower(text) != 0)
        {
            check[1]++;
        }
        else if (isdigit(text) != 0)
        {
            check[2]++;
        }
        else if (ispunct(text) != 0)
        {
            check[3]++;
        }
        count = check[0] * check[1] * check[2] * check[3];
    }
    if (count == 0)
    {
        return false;
    }
    return true;
}
