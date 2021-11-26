#include<stdio.h>
int main()
{
	char *a="hello";
	char b[]="hello";
	
	
	printf("%p\n",'h');
	printf("%p\n","hella");
	printf("%p\n","hello");
	printf("%p\n",a);
	printf("%p\n",b);
	printf("%p\n",&a);
	printf("%p\n",&a[1]);
	printf("%p\n",&b[1]);
	return 0;
	}
