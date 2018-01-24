#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,b,c;
	printf("enter the a value\n");
	scanf("%d",&a);
	printf("enter the b value\n");
	scanf("%d",&b);
	c=pow(a,b);
	printf("the power of the two no is %d\n",c);
	return 0;
}
