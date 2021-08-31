#include <stdio.h>
#include <cs50.h>
void draw(int n);

int main(void)
{
    int x ;

    do
    {

        x = get_int("Height: ");
        draw(x);
    }
    while (x < 1 || x > 8);

}


void draw(int n)
{

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = n - 1 ; j >= i + 1 ; j--)
        {
            printf(" ");
        }
        for (int j = 0 ; j < i + 1 ; j++)
        {
            printf("#");
        }
        printf("  ");

        for (int k = 0 ; k < i + 1 ; k++)
        {
            printf("#");
        }
        printf("\n");
    }






}