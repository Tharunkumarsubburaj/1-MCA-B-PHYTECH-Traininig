#include<stdio.h>

int main()
{
	int start, stop, value, even, odd;
	printf("Enter tha starting value:\n");
	scanf("%d",&start);
	printf("Enter the ending value:\n");
	scanf("%d",&stop);
	odd = 0;
	printf("The ood numbers are:");
	while(start <= stop)
	{
		if(start%2 == 0)
		{
			printf("%d ",start);
			start = start+1;
		}
	}
	printf("\n");
	printf("The even numbers are:");
	

	return 0;
}
