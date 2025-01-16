#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,i,sum=0;
printf("Enter the Value of a Number:");
scanf("%d", &a);
for(i=1; i<=a/2; i++)
{
b=a%i;
if(b==0)
sum=sum+i;
}
if(sum==a)
printf("The given number is Perfect ");
else
printf("The given number is not Perfect");
return(0);
}
