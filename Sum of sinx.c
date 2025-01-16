#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i=1;
float x,b,term,sum;
printf("Enter the Value of x:-");
scanf("%f", &b);
x=b*22/(7*180);
sum=x;
term=x;
do{
term=term*((-1)*x*x)/(2*i*(2*i+1));
sum=term+sum;
i=i+1;
} while(fabs(term)>0.000001);
printf("The sum is %f",sum);

return(0);
}