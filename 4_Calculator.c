/*
Program 4: Menu Driven calculator
Done by : Atharv J
Date: 06/07/2021
*/
#include <stdio.h>
int main ()
{

float a, b;
int choice, option;
do
{

printf("Enter the numbers:");
scanf("%f%f",&a,&b);

printf("Select your operator : \n1 for Addition \n2 for substraction \n3 for Multiplication \n4 for division\n");
scanf ("%d", &choice);
switch (choice)
{
case 1:
printf("%f + %f = %f\n",a,b,a+b);
break;
case 2:
printf("%f - %f = %f\n",a,b,a-b);
break;
case 3:
printf("%f * %f = %f\n",a,b,a*b);
break;
case 4:
if (b==0) {
    printf("Division by zero is not possible.\n");
}
else {
printf("%f / %f = %f\n",a,b,a/b);
}
break;
default:
printf("Invalid choice\n");
break;
}

printf("Do you want to continue? If yes enter 1 ,if No enter 0\n");
scanf("%d",&option);
}
while(option == 1);
return 0;
}


