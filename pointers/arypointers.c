#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5}, *ptr, i, len = sizeof(arr)/sizeof(arr[0]);
	ptr = arr;
	for(i = 0;i < len; i++)
	{
		printf("%d\n",arr[i]);
	}


	return 0;
}
