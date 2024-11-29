#include<stdio.h>
int main()
{
	int i, len;
	char arr[] = "hello"
	len = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++)
	{
		printf("%p\n",arr[i]);
	}




	return 0;
}
