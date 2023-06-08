/*
Name            : sumant raju
date            : 9/12/2022
descripton      : WAP to find which day of the year
Sample execution: -
Test Case 1:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
*/

#include <stdio.h>
int main()
{
     //variable declaration
    int firstday, n, result;

    //read the input from user 
    printf("enter the value of `n`:");
    scanf("%d", &n);

    //logic/condition to find which day of the year
    if ((1 <=n) && (n <= 365))
    {
	printf("choose first day :\n1.sunday\n2.monday\n3.tuesday\n4.wednesday\n5.thursday\n6.friday\n7.saturday\n");
	scanf("%d", &firstday);
	if(( 1 <= firstday) && (firstday<= 7))
	{
	    result = (n +(firstday - 1))%7;

	    //useing switch case condition
	    switch(result)
	    {
	     case 1:
		printf("the day is sunday\n");
		break;

	    case 2:
	       printf("the day is monday\n");
	       break;


           case 3:
                printf("the day is tuesday\n");
                break;


           case 4:
                printf("the day is wednesday\n");
                break;

          case 5:
               printf("the day thursday");
               break;

          case 6:
               printf("the day is friday\n");
               break;

          case 0:
               printf("the day is saturday\n");
	       break;

	default :
	    printf("%d", result);
	}
    }
else

    //Error condition to avoid invalid input values
    printf("Error: Invalid input, first day should be > 0 and <= 7");
}
    else
    printf("Error: invalid input, n value should be > 0 and <=365");
return 0;
}
