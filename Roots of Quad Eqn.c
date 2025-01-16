#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,disc,r1,r2,A,B;
printf("\nEnter the coefficient of Quadric Equation ax^2+bx+c :");
scanf("%f%f%f",&a,&b,&c);
disc=b*b-4*a*c;
if(a==0)
{
 printf("The Equation is not Quadratic.");
}
else
{
 r1=((-b)+sqrt(disc))/(2*a);
 r2=((-b)-sqrt(disc))/(2*a);
 if(disc>0)
 {
  printf("The Roots are Real and Unequal and they are----\nRoot1=%f \nRoot2=%f",r1,r2);
 }
else
{
 if(disc<0)
 {
  printf("The Roots are Imaginary.");
  A=(-b)/(2*a);
  B=sqrt(fabs(disc))/(2*a);
  printf("\nAnd they are ----\nRoot1=%f+%fi \nRoot2=%f-%fi",A,B,A,B);
 }
 else
 {
 printf("The roots are real and Equal and they are \n Root1=Root2=%f",r1);
 }
}
}
return(0);
}
