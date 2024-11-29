#include<stdio.h>


int main()
{
	int n1, n2, n3;
	printf("enter three unique:\n");
	scanf("%d %d %d",&n1 ,&n2 ,&n3);
	if(n1 < n2)
	{
		if(n1 < n3)
		{
			printf("%d is smaller",n1);
		}
	}
	else if(n2 < n1)
	{
		if(n2 < n3)
		{
			printf("%d is smaller",n2);
		}
	}
	else
	{
		printf("%d is smaller",n3);
	}

	return 0;
}






