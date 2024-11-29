#include<stdio.h>

int main()
{
	int a , i;
	printf("Enter the range:\n");
	scanf("%d",&a);
	printf("enter 1 or 2 : \n");
	scanf("%d",&i);
	if (i==1){	
		while(i<a)
		{
	
			printf("%d \n",i);
			i++2;
		}
	else
		while(i<=a)
		{
			printf("%d \n",i);
			i++2;
		}
	}


	return 0;
}


