#include<stdio.h>

int foo(int i)
{
    int j = i+1;
    return j;
}

int main()
{
	int a = 0;
    int b;

    b = foo(a);
    printf("%d\n", b);

    return 0;
}
