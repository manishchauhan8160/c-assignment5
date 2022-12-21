#include<stdio.h>
int main()
{
int n;
printf("enter the table no you want");
scanf("%d",&n);
for( int i=1;i<=n;i++)
{
printf("table of %d=\n",i);
for(int j=1;j<=10;j++)
printf("%d*%d=%d\n",i,j,i*j);
}
}
