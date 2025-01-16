#include<stdio.h>
#include<conio.h>
int main()
{
int fact,n,i;
fact=1;
printf("Enter the values of n:");
scanf("%d", &n);
for(i=1; i<=n; i++){
    fact=fact*i;}
printf("\n The factorial of '%d' is '%d'",n,fact);
return(0);
}