#include <stdio.h>

void foo(int *&L)
{
	int *p = L;
	p++; 
}

void bar(int *&L)
{
	L++;
}

int main()
{
	int a = 1;
	int *L = &a;
	
	printf("%ld\n", L);
	foo(L);
	printf("%ld\n", L);
	bar(L);
	printf("%ld\n", L);
}

