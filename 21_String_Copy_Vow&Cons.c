/*
Q3
Done by : Atharv J
Date: 07/09/2021
*/

#include <stdio.h>
int main()
{
     int choice,option;
     char s1[100], s2[100], d;
     char line[150];
     int j,a,e,i,o,u,c;
     a=e=i=o=u=c=0;
    
    do{
    printf("\nEnter 1 to copy the string and 2 to print frequency of consonants and vowels: ");
    scanf("%d",&choice);
    switch (choice)
        {
    case 1:
   
    printf("Enter strings s1 and s2: ");
    scanf("%s%s",s1,s2);
    for(d=0; s1[d]!='\0'; d++)
    {
    s2[d]=s1[d];
    }
    s2[d]='\0';
    printf("After copying string 1 to string 2 : " );
    printf("\nString s1: %s",s1);
    printf("\nString s2: %s",s2);
    break;
    
    case 2:
    
    printf("Enter a sentence:\n");
    getchar();
    gets(line);
    for(j=0;line[j]!='\0';j++)
    {
    if(line[j]=='a' || line[j]=='A')
        a++;
    else if ( line[j]=='e' || line[j]=='E')
        e++;
    else if(line[j]=='i' || line[j]=='I') 
        i++;
    else if (line[j]=='o' || line[j]=='O')
        o++;
    else if(line[j]=='u' || line[j]=='U')
        u++;
    else if((line[j]>='a'&& line[j]<='z') || (line[j]>='A'&& line[j]<='Z'))
        c++;
    }
    printf("a : %d\n",a);
    printf("e : %d\n",e);
    printf("i : %d\n",i);
    printf("o : %d\n",o);
    printf("u : %d\n",u);
    printf("Total Vowels: %d",a+e+i+o+u);
    printf("\nTotal Consonants: %d",c);
    break;
    default:
    printf("Invalid choice\n");
    break;
        }
       printf("\nDo you want to continue? If yes enter 1 ,if No enter 0\n");
       scanf("%d",&option);
    }
    while(option == 1);
    return 0;
}