/*
Program 5 : Sum of digits of a number
Done by : Atharv J
Date: 06/07/2021
*/
#include <stdio.h>
int main()
{
int num, reminder,sum=0;

printf("Enter the Number : ");
scanf("%d",&num);

while(num>0)
{
reminder = num % 10;
sum = sum + reminder;
num /= 10;
}

printf("The sum of digits of given number is %d",sum);
return 0;
}
