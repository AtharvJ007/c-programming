/* Program 2 :Electricity bill preparatiion
Atharv J
25-05-2021  */

#include <stdio.h>
int main()
{
    float unit;
    float amount;
    printf("Enter total units consumed: ");
    scanf("%f", &unit);
    if(unit <= 100)
    {
        amount = unit * 1;
    }
    else if(unit>100 && unit<=300)
    {
        amount = 100 + ((unit-100) * 2);
    }
    else
    {
        amount = 500 + ((unit-300) * 3);
    }
    printf("Electricity Bill = Rs. %f", amount);
    return 0;
}

