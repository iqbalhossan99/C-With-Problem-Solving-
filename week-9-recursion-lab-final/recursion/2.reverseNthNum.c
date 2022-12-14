#include<stdio.h>

void print_NthNum( int n)
{
    if(n==0)
        return 0;
    printf("%d ", n);
    print_NthNum(n-1);
//    printf("%d ", n); // if we run this line then it will work reverse
}
int main()
{
    int n = 5;
    print_NthNum(n);
    return 0;
}

