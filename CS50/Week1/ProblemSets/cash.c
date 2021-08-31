#include<stdio.h>
#include <cs50.h> //in order to use get float and string and other things
#include <math.h>//to be able to use round function
float m;
int p = 1, nickel = 5, dime = 10, quarter = 25, coins = 0; // coins are the coint while other integars are the coins
int main(void)
{
    do
    {
        m = get_float("Enter the remaining dollars :") ;
    }
    while (m < 0);
    m = m * 100; // converting a dolar to cents
    m = round(m); //returns the nearest integer value of the float/double/long double argument passed to this function.
    while (m >= quarter)
    {
        m = m - quarter;
        coins = coins + 1;
    }
     
    while (m >= dime)
    {
        m = m - dime;
        coins = coins + 1;
    }
    while (m >= nickel)
    {
        m = m - nickel;
        coins = coins + 1;
    }
    while (m >= p)
    {
        m = m - p;
        coins = coins + 1;
    }
   
    printf("%i\n", coins);
   



}
