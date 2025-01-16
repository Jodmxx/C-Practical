#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i=1;
float x,term=1,sum=1;
printf("Enter the Value of x:-");
scanf("%f", &x);
do{
term=term*x/i;
sum=term+sum;
i=i+1;
} while(fabs(term)>0.000001);
printf("The sum is %8.4f, which is correct upto 4 decimal place",sum);

return(0);
}
