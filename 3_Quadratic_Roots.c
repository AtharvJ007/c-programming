/* Program 3 : Roots of quadratic equation
Atharv J
25-05-2021  */

#include <stdio.h>
#include <math.h>

int main()
{
   int a,b,c,d,opt;
   float x1,x2;
 do
 {
   printf("Enter the value of a,b & c : \n");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-(4*a*c);
   if(d==0)
   {
     printf("Both roots are equal.\n");
     x1=-b/(2*a);
     x2=x1;
     printf("First Root = %f\n",x1);
     printf("Second Root = %f\n",x2);
   }
   else if(d>0)
    {
       printf("Both roots are real and different\n");
       x1=(-b+sqrt(d))/(2*a);
       x2=(-b-sqrt(d))/(2*a);
       printf("First Root= %f\n",x1);
       printf("Second Root= %f\n",x2);
    }
    else
    {
        printf("Root are imaginary;\nNo Solution. \n");
    }
    printf("\n Press 1 to continue...\n ");
    scanf("%d",&opt);
    
    }while(opt==1);        
        return 0;
}



