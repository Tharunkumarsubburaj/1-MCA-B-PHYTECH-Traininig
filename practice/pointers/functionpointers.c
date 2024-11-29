#include<stdio.h>

void greet(int a, int b)
{
	printf("The sum of %d and %d is %d\n", a, b, a+b);
}

void compare(int a, int b)
{
	if(a >b)
	{
		printf("a i9s greater than b");
	}
	else
	{
		printf("b is greater than a");
	}
}

int main()
{
	int num1, num2;
	printf("Enter two number: ");
	scanf("%d %d", &num1, &num2);
	void(*x)(int a, int b);
	void(*y)(int a, int b);
	x = greet;
	y = compare;
	x(num1, num2);
	printf("%p\n",(void*)x);
	printf("%p\n",(void*)y);


	return 0;
}
