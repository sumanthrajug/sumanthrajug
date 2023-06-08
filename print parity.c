/*
Name          : sumant raju
date          : 13/12/2022
descripton    : WAP to count number of set bits in a given number and print parity
sample input  : 15
sample output : Enter the number 
                15                   
                number of set bits =4
                bit parity is Even
 
*/


#include <stdio.h>
int main()
{

    // variable declaration
    int number;
    int count = 0;
 
    printf("Enter the number\n");
    scanf("%d", &number);

    //use while loop(toggle)
    while(number != 0)
    {

	//logic to get setbits for given number
        if ((number & 1) == 1)
            count++;
        number = number >> 1;
    }
    printf("number of set bits =%d\n", count);
{
    //condition to check odd parity bit
    if (count & 1)
    {
	//print odd parity bit if obove condition true 
       	printf("bit parity is odd\n");
    }
    else
    {
	//print even parity bit if condition false
	printf("bit parity is even\n");
    }
    return 0;
    }
}
