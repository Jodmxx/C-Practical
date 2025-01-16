#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("Enter the Value of n:");
scanf("%d", &n);
for(i=2;i<=n/2;i++){
if(n%i==0)
printf("The given number is not prime");
else
printf("The Number is prime");
return(0);}

}
