/*
Name         : sumant raju
date         : 8/12/2022
descripton   : WAP to generate AP, GP, HP seriaes
sample input : 2,3,5

*/

#include <stdio.h>
int main()
{
    //variable declaration
    int A,R,N, AP=A, GP=A;
    float HP;
    //read input from user
    printf("Enter the number: \n");
    scanf("%d %d %d", &A, &R,&N);
if(N>0)
{
    //logic or condition to generate AP series
    printf("\nAP=");
    AP=A;
    for (int i=1;i<=N; i++)
    {
       printf("%d ", AP);
       AP=AP+R;
    }

   //logic or condition to generate GP series 
    printf("\nGP=");
    GP=A;
    for(int i=1;i<=N;i++)
    {
       printf("%d ",GP);
       GP=GP*R;
    }

    //logic or condition to generate HP series
    printf("\nHP=");
    HP=(float)1/A;
    for (int i=1;i<=N; i++)
    {
       printf("%f ",HP);
       A=A+R;
       HP=1/(float)A;
    } 

    // print new line if condition false
    printf("\n");
    }
else
    {
    
    //print invalid if condition is false
    printf("Invalid input");
    }
return 0;
}
