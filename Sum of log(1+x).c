#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i=1;
float x,term=0,sum=0;
printf("Enter the Value of x:");
scanf("%f", &x);
if(x<=1&x>-1)
{
sum=x,term=x;
while(fabs(term)>0.00001)
{
term=term*(-i)*x/(i+1);
sum=sum+term;
i=i+1;
}
printf("Your required sum is = %f",sum);
}
else
printf("The series is not Convergent");
return(0);
}