//this program ecrypts massaging depending on the key
#include <stdio.h>
#include <cs50.h>// for using strings
#include <ctype.h>// for using is alpha and islower and isupper
#include <string.h>// for using strlen
#include <stdlib.h> // for using atoi
int main(int argc, string argv[])
{
    if (argc != 2) // so that it only accepts once string at a time
    {
        printf("Usage:./caesar key \n");
        return 1;
    }
    for (int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        int n = argv[1][i];
        if (isdigit(n) != 2048) // if it is not a digit print this
        {
            printf("Usage: ./caesar key..\n");
            return 1;
        }
    }
    int num = atoi(argv[1]); //converting a string into an integar
    string plaintext = get_string("Plainttext: ");
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(plaintext) ; i++)
    {
        if (isalpha(plaintext[i])) // we need to check if it is an alphapet
        {
            if (isupper(plaintext[i])) // we need to check if it is a capital letter cuz it has diferent number
            {
                int c = (plaintext[i] - 65 + num) % 26 + 65;
                printf("%c", c);
            }
            if (islower(plaintext[i]))
            {
                int z = (plaintext[i] - 97 + num) % 26 + 97;
                printf("%c", z);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n"); // for printing a new line after everything
    return 0;
}
