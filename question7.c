#include<stdio.h>
int main()
{
int n;
printf("enter the range");
scanf("%d",&n);
for(int i=n;i>=1;i--)
{
if(i%2!=0)
printf("%d\n",i);
}
}
