#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,sum=0;
printf("Enter the Value of a Number:");
scanf("%d", &a);
for(i=2; i<=a; )
{
sum=sum+i;
i=i+2;
}
printf("The Sum is %d",sum);
return(0);
}