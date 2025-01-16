#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,d,r1,r2;
printf("Enter the value of a b c:");
scanf("%f %f %f", &a,&b,&c);
d=b*b-4*a*c;
r1=((-b)+sqrt(d))/2*a;
r2=((-b)-sqrt(d))/2*a;
if(d>=0)
printf("The roots of the Equation are real and they are'%f' and '%f'", r1,r2);
else
printf("The roots of the Equantion are not real");
return(0);
}