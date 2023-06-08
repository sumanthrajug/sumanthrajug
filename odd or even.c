/*
Name         : sumanth raju
date         : 30/11/2022
descripton   : WAP to check if number is odd or even
sample input : num
sample output: Test Case 2:
               Enter the value of 'n' : 2
               2 is positive even number
*/

#include <stdio.h>                                //pre_processro directive
int main()                                        //main functiom                               
{                                                   
    int num;                                       //variable declaration          
    printf("Enter the value of num : ");                                            
    scanf("%d", &num);                            //read input from user
    if (num == 0)                                 //logic to find the zero is nither even or odd
    {
	      printf("%d is neither odd nor even\n", num);
    }
    if(num > 0)                                   //logic to find positive number                                         
       {
           
	  if (num % 2 == 0)                            //logic to finf even or odd positive number                                                                        
	  {
	     printf("%d is positive even number \n", num);                
       }
	   else
	   {

              printf("%d is positive odd number \n", num);                     
	       }
       }
	  else
	       {
		   if (num < 0)                           //logic to find negitive number                           
		  {
		   if(num % 2 == 0)                       //logic to find even or odd negative number
		   {
		    printf("%d is negative even number \n", num);                    
	       }
		   else
		   {
		       printf("%d is negative odd number \n", num);                 
		   }
		}
   }
   return 0;                                        //the statement is terminated successfully
        
}
