#include<stdio.h>
#include<conio.h>
int main()
{
int mean,n1,n2,n3;
printf("Enter the values of n1 n2 n3:");
scanf("%d %d %d", &n1,&n2,&n3);
mean=(n1+n2+n3)/3;
printf("\n The mean of these number is '%d'",mean);
return(0);
}