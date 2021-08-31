// making a mario pyramid
#include <cs50.h>
#include <stdio.h>
int h;
int main(void)
{
    do// to prompt the user to enter numbers from 1 to 8 only otherwise it will repeat
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    for (int i = 0 ; i < h ; i++)
    {
        for (int x = h - 1 ; x > i ; x = x - 1)// it decreases as i increases and it depends on h also
        {
            printf(" ");// it were dots at first for testing the numbers
        }
        for (int j = 0 ; j < i + 1 ; j++)
        {  
    
            printf("#");
        }
        printf("\n");
    }
}
