#include <stdio.h>

int main(void) {
	int year;
	printf("%d",year);
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	return 0;
}
