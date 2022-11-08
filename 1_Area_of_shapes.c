/* Program 1 :Areas of rectangle and Triangle
Atharv J
25-05-2021*/

#include<stdio.h>
 
int main()
{
    int opt;
    float l,b,h,a;
    
    do
    {
    printf("Please select an option from the following to find the area:\n 1.Rectangle\n 2.Triangle\n");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1:
        {
            printf("\nPlease enter the lenghth and bradth of the Rectangle\n");
            scanf("%f""%f",&l,&b);
            a=l*b;
            printf("\nThe area of the given Rectangle is %f",a);
        }break;
        case 2:
        {
            printf("\nPlease enter the base and height of the Triangle\n");
            scanf("%f""%f",&b,&h);
            a=0.5*b*h;
            printf("\nThe area of the given Triangle is %f",a);
        }break;
        default:
        {
            printf("Invalid option");
        }
    }
    printf("\n Press 1 to continue...\n ");
    scanf("%d",&opt);
    
    }while(opt==1);
    return 0;
}


