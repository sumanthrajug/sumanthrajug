/*
Name            : sumanth raju
date            : 2/11/2022
descripton      : WAP to generate negative Fibonacci numbers
Sample execution: 
                  Test Case 1   :
	              Enter a number: -8
                  0 1 -1 2 -3 5 -8

                  Test Case 2:
                  Enter a number: -10
                  0 1 -1 2 -3 5 -8
*/

#include <stdio.h>
int main()
{
    
    //variable declaration
    int first=0,second=1,num,next=0;
    int newnum;
    
    //read input from user
    printf("enter the num value:");
    scanf("%d",&num);
    
    //check number is negative
   if (num <= 0)
   {
       
       //logic to print fibonacci series
    	while(next >= num && next <= -num)
    	{
        	printf("%d\n",next);
       		first=second;
		second=next;
		next = first - second;
	    }
   }
   else
   {
   	printf("Invalid Input\n");
   }

    return 0;
}
