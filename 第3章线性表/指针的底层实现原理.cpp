#include<stdio.h>
int main()
{
	int a;
	int b;
	int *p;
	p=&a;
	printf("%p %p\n",&a,p);
	p=&b;
	printf("%p %p\n",&a,p);
	return 0;
}
