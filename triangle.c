/*
Name          : sumant raju
date          : 8/12/2022
descripton    : WAP to print triangle pattern as shown below
Sample Output : Test Case 1:
                Enter the number: 4
                1 2 3 4
                5     6
                7 8
                9
                
*/

#include <stdio.h>
int main()
{

    //variable declaration
    int i, j, num, sum=1;

    //read input from user
    scanf("%d", &num);
    for (i =1;i <= num;i++)
    {

	//using neasted loop for print the pattern
	for(j =1;j <= num;j++)
	{
	    //logic to print pattern
	    if(i == 1 || j == 1|| (i+j) == num + 1)
	    {
		printf("%d ", sum);
		    sum = sum + 1;
		}
		else
		{
		    //print space if condition will be false
		    printf(" ");
		}
	    }
	    printf("\n");
	}
	return 0;
    }

