#include<stdio.h>
int main()
{
	int num, *a = &num, **b = &a;
	printf("Enter the value: ");
	scanf("%d",&num);
	printf("The value of number is %d\n", num);
	printf("The address of number is %p\n", (void*)&num);
	printf("The value of pointers is %p\n",(void*) a);
	printf("Dereference value is %d\n", *a);
	printf("The addrress of a is %p\n", (void*)b);
	printf("The addrress of number is %p\n", (void*)*b);
	printf("The value of number is %d\n", **b);
}
