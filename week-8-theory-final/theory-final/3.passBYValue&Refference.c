#include<stdio.h>
int main ()
{
    int value = 10;

    int result = findPassByRefference(&value);
    printf("%d", result);

    return 0;
}

int findPassByRefference(int *value)
{
    return *value + 5;
}

