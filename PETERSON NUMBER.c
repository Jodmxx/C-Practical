#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,i,a,fact,sum=0;
printf("Enter any number: ");
scanf("%d", &n);
a=n;
while(a>0)
{
fact=1;
for(i=1;i<=a%10;i++)
{
fact=fact*i;
}
a=a/10;
sum=sum+fact;
}
if(sum==n)
printf("The given number is PETERSON");
else
printf("The given number is not PERERSON");
return(0);
}
