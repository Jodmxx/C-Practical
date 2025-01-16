#include<stdio.h>
#include<conio.h>
int main()
{
int sum,n,i;
sum=0;
printf("Enter the values of n:");
scanf("%d", &n);
for(i=0; i<=n; i++){
sum=sum+i;}
printf("\n The Sum of n number is '%d'",sum);
return(0);
}