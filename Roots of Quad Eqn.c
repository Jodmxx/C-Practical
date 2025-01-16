#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,r1,r2;
printf("Enter the value of a b c:");
scanf("%f %f %f", &a,&b,&c);
r1=((-b)+sqrt(b*b-4*a*c))/2*a;
r2=((-b)-sqrt(b*b-4*a*c))/2*a;
printf("The roots of the Equation is '%f' and '%f'", r1,r2);
return(0);
}