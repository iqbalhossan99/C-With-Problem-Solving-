#include<stdio.h>

int add_three_nums(int a, int b, int c);
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}


int main()
{
    int a, b, c=0;
    scanf("%d%d", &a, &b);

   int result = add_three_nums(a,b,c);

    printf("%d", result);
    return 0;
}

