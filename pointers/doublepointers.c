#include<stdio.h>
int main()
{
	int x[4], *a = &x, **b = &a, i;
	printf("Enter the value of array: ");
	for(i = 0;i < 4; i++)
	{
		scanf("%d", &x[i]);
	}
	for(i = 0;i < 4; i++)
	{
		printf("value: %d\n",x[i]);
	}
       	for(i = 0;i < 4; i++)
        {
                printf("The address of a[%d] is %p\n", i, *(x+i));
        }
	for(i = 0;i < 4; i++)
        {
                printf("The value of a[%d] is %d\n", i, *(x+i));
        }


	return 0;
}
