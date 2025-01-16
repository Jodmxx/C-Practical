#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,i,frag=0;
printf("Enter the Value of n:");
scanf("%d", &n);
for(i=2;i<=n/2;i++)
{
r=n%i;
if(r==0)
frag=1;
}
if(frag==1)
printf("The given number is not prime");
else
printf("The given number is prime");
return(0);

}
