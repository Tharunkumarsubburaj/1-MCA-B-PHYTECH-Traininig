#include<stdio.h>
int main()
{
	int a = 20;
	int *ptr;
	ptr = &a;
	printf("%d\n",*ptr);
	printf("%d\n",a);
	printf("%p\n",ptr);
	printf("%p\n",&ptr);
	printf("%p\n",&a);



	return 0;
}
