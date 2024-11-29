#include<stdio.h>
int main()
{
	int x[] = {10,20,30,40,50}, *a = &x, i;
	for(i = 0;i < 5; i++)
	{
		printf("The value of array i %d\n",x[i]);
		printf("The addrress of array values is %p\n", (void*)a);
	}


	return 0;
}

