#include<stdio.h>
int main()
{
	char arr[] = "tharun kumar", arr2[] = "";
	int i;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(i=len;i>=0;i--)
	{
		printf("%c",arr[i]);
	}


	return 0;
}
