#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //if the user did not enter any key
    if (argc < 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string s = argv[1];

//checking if the string length is more than 26 charachters
    if (strlen(s) < 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    //checking alphapetic charachters
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (!((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
        {
            printf("key only contain alphabetic charachters.\n");
            return 1;

        }

    }

    //checking for repeated charachters

    for (int i = 0 ; i < strlen(s) ; i++)
    {
        for (int j = i + 1 ; j < strlen(s) ; j++)
        {

            if (s[i] == s[j] || s[i] == s[j] + 32 || s[i] == s[j] - 32)
            {
                printf("key must not contain repeated numbers \n");
                return 1;
            }

        }
    }

    string plaintext = get_string("plaintext: ");
    string ciphertext = plaintext; ;

    for (int i = 0 ; i < strlen(plaintext) ; i++)
    {
        //checking if the plaintext is small
        if (islower(plaintext[i]))
        {
            //checking if the key characher is capital
            if (isupper(s[plaintext[i] - 97]))
            {
                ciphertext[i] = s[plaintext[i] - 97] + 32; // changing from capital letter to small letter

            }
            else
            {
                ciphertext[i] = s[plaintext[i] - 97];

            }


        }
        else if (isupper(plaintext[i]))
        {
            if (isupper(s[plaintext[i] - 65]))
            {

                ciphertext[i] = s[plaintext[i] - 65];
            }
            else
            {

                ciphertext[i] = s[plaintext[i] - 65] - 32;
            }

        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }


    printf("ciphertext: %s\n", ciphertext);



}



