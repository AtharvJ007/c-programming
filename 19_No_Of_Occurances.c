/*
Program 19 : Number Of Occurance
Done by : Atharv J
Date: 24/08/2021
*/

#include <stdio.h>
int main(){

int array[30];
int i,num,size;
int occur =0;
int *p = array;

printf("Enter the number of elements : ");
scanf("%d",&size);

printf("Enter the elements of array : ");
for(i=0;i<size;i++) {
scanf("%d",(p+i));
}

printf("\nEnter the number to find the occurrence : ");
scanf("%d",&num);

for(i=0;i<size;i++) {
if(*(p+i)==num) {
occur++;
}
}

printf("Number of occurrences of the element %d is %d.",num,occur);
return 0;
}
