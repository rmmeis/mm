#include<stdio.h>
int main()
{
int i,n;
printf("please enter the number");
scanf("%d",&n);
for(i=0;i<=5;i++)
{
if(i%n==0)
printf("%d",i);
printf("\t");
}
return 0;
}
