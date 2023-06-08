/*
Name          : sumant raju
date          : 1/12/2022
descripton    : WAP to generate positive Fibonacci numbers
Sample input  : num=9
sample output : 0,1,1,2,3,5,8
*/

#include <stdio.h>
int main()
{
    
    //variable declaration
    int first=0,second=1,num,next=0;  
    
    
    //read input from user
    printf("enter the num value:");
    scanf("%d",&num);
    
    //logig to check number is positive
    if(num >= 0)
    {
        
    //logic to print fibonacci series
    while(next <= num)           
    {             
        printf("%d ", next);   
        first = second;                               
    	second = next;                                 
	    next = first + second;                              
    }
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
