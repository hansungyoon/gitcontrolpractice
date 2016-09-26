#include <stdio.h>
void passing(int *p,int *pp);
int main(int argc, char *argv[])
{
	int a[20], *p;
	p=a;
	a[0]=5;
	int b , *c;
	c = &b;
	b=10;
	passing(p,c);
	printf("this is the value of b: %d\n", b);
	printf("this is the value of a[0]: %d\n", a[0]);
}
void passing (int *p, int *pp)
{
	(*p)++;
	(*pp)++;
	printf("value of the pointer p is : %d\n", *p);
	printf("did the value of a[0] change?\n");
	printf("value of the pointer c is : %d\n", *pp);
	printf("did the value of b change?\n");
}
