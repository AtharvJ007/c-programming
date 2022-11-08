/*
Program 18 : Mark Sheet
Done by : Atharv J
Date: 24/08/2021
*/
#include <stdio.h>
struct student {
    int roll_no;
    char name[30];
    float total_mark;
    }stuarr[50];
    
int main(){
int n,i;

printf("Enter the number of students : ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("\nEnter roll number of the student %d : ",i+1);
scanf("%d",&stuarr[i].roll_no);
printf("Enter name of the student %d: ",i+1);
scanf("%s",stuarr[i].name);
printf("Enter total mark of the student %d: ",i+1);
scanf("%f",&stuarr[i].total_mark);
}

printf("\n\tRollNo.\tName\tTotal mark\t\n");

for(i=0;i<n;i++) {
printf("\t%d\t%s\t%f\t\n",stuarr[i].roll_no, stuarr[i].name, stuarr[i].total_mark);
}
return 0;
}
