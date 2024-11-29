#include<stdio.h>

int main()
{
	int num, i, j;
	printf("Enter the number of star to print:");
	scanf("%d\n", &num);
	for(i = 0; i <=num; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("a");
		}
	}

	return 0;
}
