#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,j,m,n;
float a[6][6],b[6][6],c[6][6];
printf("\n Enter the number of rows:");
scanf("%d",&m);
printf("\n Enter the number of columns:");
scanf("%d",&n);
printf("\n Enter the elements of the 1st matrix:");
for(i=1;i<=m;i++)
{
  for(j=1;j<=n;j++)
       {
        printf("\nin Enter the valus of a[%d][%d]:",i,j);
        scanf("%f",&a[i][j]);
       }
}
printf("\n Enter the elements of the 2nd matrix:");
for(i=1;i<=m;i++)
  {
     for(j=1;j<=n;j++)
     {
        printf("\n\n Enter the valus of b[%d][%d]: ",i,j);
        scanf("%f",&b[i][j]);
  }
    }
    
printf("\n The Matrix 1 is: \n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
     {
     printf("%6.2f",a[i][j]);
     }
    printf("\n");
}
printf("\n The Matrix 2 is: \n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
     {
     printf("%6.2f",b[i][j]);
     }
    printf("\n");
}
printf("\n The Sum of  Matrix 1 and 2 is: \n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
     {
     c[i][j]=a[i][j]+b[i][j];
     printf("%6.2f",c[i][j]);
     }
    printf("\n");
}
return(0);
}