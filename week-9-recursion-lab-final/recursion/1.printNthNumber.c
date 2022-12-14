#include<stdio.h>

void print_NthNum(int i, int n)
{
    if(i>n)
        return 0;
    print_NthNum(i+1, n);
    printf("%d", i);
}
int main()
{
    int n = 5;
    print_NthNum(1,n);
    return 0;
}
