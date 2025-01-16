#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,n;
float s[20],sqsum,sum,mean,var,sd;
printf("Enter the Value of a n:");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("Enter the value of S[%d]: ", i);
scanf("%f",&s[i]);
}
sum=sqsum=0;
for(i=1;i<=n;i++)
{
sum=sum+s[i];
sqsum=sqsum+s[i]*s[i];
}
mean=sum/n;
var=sqsum/n-mean*mean;
sd=sqrt(var);
printf("Mean=%f \n Variance=%f \n Stranded Deviation=%f ",mean,var,sd);
return(0);
}