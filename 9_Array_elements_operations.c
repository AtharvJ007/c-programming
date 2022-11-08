/*
Program 9 : Sum and average of elements in array
Done by : Atharv J
Date: 20/07/2021
*/

#include<stdio.h>
int main()
{   
    int n,a[50],i;
    float average,sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<n;i++)
        sum+=a[i];
        average=sum/n;
    
    printf("sum : %f\n",sum);
    printf("average : %f\n",average);

return 0;
}