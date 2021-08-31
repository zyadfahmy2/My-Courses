//prompt the user to input a string where the program will count the words and letters and sentences and then calculates the grade of the paragraph accoring to its level
#include <stdio.h>
#include <cs50.h> // for get string
#include <ctype.h> //for is alpha() and isspace()
#include <string.h> // for strlen()
#include <math.h> // for round()
int letter = 0;
int word = 1;
int sentence = 0;

int main(void)
{
    string s = get_string("Text: ");
    for (int i = 0, n = strlen(s); i < n ; i++)
    {
        if (isalpha(s[i]) == 1024)
        {
            letter += 1;
        }
        if (isspace(s[i]) != 0)
        {
            word += 1;
        }
        if ((int)s[i] == 63 || (int)s[i] == 46 || (int)s[i] == 33)
        {
            sentence += 1 ;
        }
    }

    float L = letter / (float)word * 100;
    float S = sentence / (float) word * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

}