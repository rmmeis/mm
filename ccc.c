#include<stdio.h>
int main()
{
int f1,f2,rem,i;
printf("\nfirst number");
scanf("%d",&f1);
printf("\nsecond number");
scanf("%d",&f2);
printf("\nthe even number between %d and %d",f1,f2);
for(i=f1+1;i<=f2;i++)
{
rem=i%2;
if(rem==0)
{
printf("\n output is:%d",i);
}
}
return 0;
}
