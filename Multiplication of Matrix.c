#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,j,k,m1,m2,n1,n2;
float a[6][6],b[6][6],c[6][6];
printf("\n Enter the number of rows of A:");
scanf("%d",&m1);
printf("\n Enter the number of columns of A:");
scanf("%d",&n1);
printf("\n Enter the number of rows of B:");
scanf("%d",&m2);
printf("\n Enter the number of columns of B:");
scanf("%d",&n2);
printf("\n Enter the elements of the 1st matrix:");
if(n1==m2)
{
printf("\n Enter the elements of A:");
for(i=1;i<=m1;i++)
{
for(j=1;j<=n1;j++)
{
printf("\n Enter the valus of a[%d][%d]:",i,j);
scanf("%f",&a[i][j]);
}
}
printf("\n Enter the elements of B:");
for(i=1;i<=m2;i++)
{
for(j=1;j<=n2;j++)
{
printf("\n Enter the valus of b[%d][%d]:",i,j);
scanf("%f",&b[i][j]);
}
}
printf("\n The Matrix A is: \n");
for(i=1;i<=m1;i++)
{
for(j=1;j<=n1;j++)
{
printf("%6.2f",a[i][j]);
}
printf("\n");
}
printf("\n The Matrix B is: \n");
for(i=1;i<=m2;i++)
{
for(j=1;j<=n2;j++)
{
printf("%6.2f",b[i][j]);
}
printf("\n");
}
printf("\n The Multiplication Matrix C is: \n");
for(i=1;i<=m1;i++)
{
for(j=1;j<=n2;j++)
{
c[i][j]=0;
for(k=1;k<=n1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("%8.2f",c[i][j]);
}
printf("\n");
}
}
else
printf("\n The Multiplication is Not Possible.");
getch(0);
}