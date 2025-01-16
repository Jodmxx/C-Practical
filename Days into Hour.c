#include<stdio.h>
#include<conio.h>
int main()
{
float days,hour;
printf("Enter the values of Days:");
scanf("%f", &days);
hour=24*days;
printf("\n %f Days = %f Hours",days,hour);
return(0);
}