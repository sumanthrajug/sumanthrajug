/*
Name         : sumant raju
date         : 8/12/2022
descripton   : WAP to print the numbers in X format as shown below
Sample input : 4
             
              
*/

#include <stdio.h>
int main()
{
    //variable declaration
    int i,j,rows;

    //read input from the user
   printf("Enter number of rows:");
   scanf("%d",&rows);
  
   for(i=0;i<rows;i++)
       {

      for(j=0;j<rows;j++)
      {
	  //logic to print numbers in X formet
         if(i==j)
	 {
            printf("%d",i+1);
         }
	 else if(rows==i+j+1)
	 {
           printf("%d", j+1);
         }
	 else 
      printf(" ");
   }
      printf("\n");
}
return 0;
}
