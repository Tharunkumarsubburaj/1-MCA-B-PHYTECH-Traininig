#include<stdio.h>
int main()
{
	char arr[] = "tharun kumar";
	int i, len = sizeof(arr)/sizeof(arr[0]);
	for(i=len;i>=0;i--)
	{
		printf("%s",arr[i]);
	}
	printf("\n");


	return 0;
}

