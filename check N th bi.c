/*
Name            : sumant raju
date            : 13/12/2022
descripton      : WAP to check N th bit is set or not, If yes, clear the M th bit
Sample Execution:
                 Enter the number: 19
                 Enter 'N': 1
                 Enter 'M': 4
                 Updated value of num is 3 
*/

#include <stdio.h>
int main()
{
    int num,N,M;                                        //declarastion of variables
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the N:\n");
    scanf("%d",&N);                                    //read input from the user
    printf("Enter the M:\n");
    scanf("%d",&M);

    if ( num & (1<<N))                                //condition to check the bit is set or not using mask
    {
	num = ( num & (~ (1<<M)));                    
	printf("updated value of num is %d\n",num);
    }
    else
    {
	printf("updated value of num is %d\n",num);
    }
    return 0;
}

