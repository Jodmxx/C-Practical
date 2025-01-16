#include<stdio.h>
#include<conio.h>
int main()
{
int r,n,m,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(sum==m)
         printf("\n The no %d is ARMSTRONG.",m);
else
         printf("\n The no %d is NOT ARMSTRONG",m);
getch();
}