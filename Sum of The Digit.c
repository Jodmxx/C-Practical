#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,sum=0;
printf("Enter the Value of a Number:");
scanf("%d", &a);
b=a;
while(a>0)
{
c=a%10;
sum=sum+c;
a=a/10;
}
printf("The Sum of The Digits of the given number is %d",sum);
return(0);
}
