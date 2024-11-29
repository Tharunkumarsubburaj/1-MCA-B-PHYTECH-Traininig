#include<stdio.h>
int main()
{
	int a[2][3] = {10, 20, 30, 40, 50, 60}, len, i, diff, b, c;
        int *x = &a, **y = &x;
	len = (sizeof(a)/sizeof(a[0]))*2;
	for(i = 0;i < len; i++)
	{
		printf("%p\n",*(a+i));
		printf("%d\n",*(*(a+i)+i));
	}
	/*printf("%d\n",*(*(a+0)+*(a+1)));
	printf("%p\n",*((a+1)+(a+1)));
	b = *(*(a+0)+0);
	c = *(*(a+1)+0);
	diff = c-b;
	printf("%d",diff);*/


	return 0;
}

