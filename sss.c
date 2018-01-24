#include<stdio.h>
int main()
{
int n,reversedinteger=0,remainder,originalinteger;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reversedinteger+reversedinteger*+remainder;
n/=10;
}
if(originalinteger==reversedinteger)
printf("%d is a palindrome.",originalinteger);
else
printf("%d is not a palindrome.",originalinteger);
return0;
}
