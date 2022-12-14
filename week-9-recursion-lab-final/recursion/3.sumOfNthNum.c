#include<stdio.h>

int print_NthNum(int i, int n)
{
    if(i>n)
        return 0;
    int s = print_NthNum(i+1, n);
    return s + i;
}
int main()
{
    int n = 3;
    int r = print_NthNum(1,n);
    printf("%d", r);
    return 0;
}
