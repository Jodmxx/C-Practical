#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,i,j;
float x[20],s;
printf("Enter the number of term you want to sort: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("Enter the value x[%d]: ",i);
scanf("%f",&x[i]);
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if (x[i]>x[j])
{
s=x[i];
x[i]=x[j];
x[j]=s;

}
}
}
printf("The number in increasing format given below______");
printf("\n \n");
for(i=1;i<=n;i++)
{
printf("%8.4f",x[i]);
}
return(0);
}
