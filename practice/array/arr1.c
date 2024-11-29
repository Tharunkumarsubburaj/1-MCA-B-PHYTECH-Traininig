#include<stdio.h>
int main()
{
	int arr[5],i,sum;
	printf("Enter the values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum = sum+arr[i];
	}
	printf("the value of sum of array is %d",sum);


	return 0;
}


