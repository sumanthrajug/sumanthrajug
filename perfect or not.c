/*
Name            : sumant raju
date            : 8/12/2022
descripton      : WAP to check if number is perfect or not
Sample execution: -
Test Case 1:
Enter a number: 6
Yes, entered number is perfect number

Test Case 2:
Enter a number: 10
No, entered number is not a perfect number

Test Case 3:
Enter a number: -1
Error : Invalid Input, Enter only positive number

 */

#include <stdio.h>
int main()
{
    
    //variable declaration
    int i, num, sum = 0;
    
    //read input from user
	printf("Enter the number: ");
	scanf("%d", &num);
	
	//the output will be always positive
	if ( num > 0)
	{

	for(i = 1; i <= num / 2; i++)
	{      
	    if(num%i == 0)
		sum += i;
	    }
    //logic to find perfect number
	if(sum == num)
	
	    printf(" Yes, entered number is perfect number");
	else
	    printf(" No, entered number is not a perfect number");
    }
    else
	printf("Error : Invalid Input, Enter only positive number");
    return 0;
}
