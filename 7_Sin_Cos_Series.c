/*
Program 7 : Sine and cosine series
Done by : Atharv J
Date: 13/07/2021
*/
#include <stdio.h>
int main()
{
    int n,d,i,j;
    float x,sum,t;
    printf("Enter angle in degree and the number of terms : \n");
    scanf("%d%d",&d,&n);
    x=d*3.14159/180;
    t=x;
    sum=t;
    for(i=1;i<=n;i++)
    {
        t=(t*-1*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf("sin(%d)=%f\n",d,sum);
   
    t=1;
    sum=1;
    for(j=1;j<=n;j++)
    {
        t=(t*-1*x*x)/(2*j*(2*j-1));
        sum=sum+t;
    }
    printf("cos(%d)=%f\n",d,sum);
}