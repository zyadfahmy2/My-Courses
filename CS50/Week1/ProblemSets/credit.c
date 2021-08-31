#include <stdio.h>
#include <cs50.h>

//checking wether the credit card is valid or not then printing the type of it
int countcheck(long z);

int main(void)
{
    long x = get_long("Number: ");

    //counting the number of digits
    int count = countcheck(x);

    //counter for the while loop
    int counter = 0;
    int sum = 0;

    //arr the contain the numbers but i reverse order
    int arr[count];
    //arr contains the numbers but not in reverse
    int arr1[count];

    //printf("\nThe Number is: %i \n" , count);
    while (x != 0)
    {
        arr1[counter] = x % 10;  //putting the last digit in the first element and so on
        arr[counter] = x % 10;
        x /= 10;// removing the last digit
        counter++;

    }


    for (int i = 1  ; i < count ;  i += 2)
    {
        arr1[i] *= 2;
        if (arr1[i] >= 10)
        {
            arr1[i] = arr1[i] % 10 + arr1[i] / 10;
        }





    }
    //calculating checksum
    for (int i = 0 ; i < count ; i ++)
    {
        sum += arr1[i];
    }
    // printf("Sum :%i\n",sum);
    // printf(" %i  %i \n" , arr[count-1] ,arr[count-2]);

    //thats the condition for checksum  and the card must be between 13 and 16 including them
    if (sum % 10 != 0 || count < 13 || count > 16)
    {
        printf("INVALID\n");
        return 0;
    }


    //condition for American Express
    if (count == 15 && (arr[count - 1] == 3 && (arr[count - 2] == 4 || arr[count - 2] == 7)))
    {
        printf("AMEX\n");
    }
    //Condition for MasterCard
    else if (count == 16 && (arr[count - 1] == 5 && ((arr[count - 2] == 1 || arr[count - 2] == 2 || arr[count - 2] == 3
                             || arr[count - 2] == 4 || arr[count - 2] == 5))))
    {
        printf("MASTERCARD\n");
    }
    else if ((count == 13 || count == 16) && arr[count - 1] == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }


}

//counting the number of digits
int countcheck(long z)
{
    int count = 0;
    while (z != 0)
    {
        z /= 10;
        count++;
    }
    return count;

}