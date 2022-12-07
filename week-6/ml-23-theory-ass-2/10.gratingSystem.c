#include<stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);

    great(mark);

    return 0;
}

void great(int mark)
{
    if(mark>=80 && mark<=100)
        printf("A");
    else if(mark>=60 && mark<=79)
        printf("B");
    else if(mark>=40 && mark<=59)
        printf("C");
    else
        printf("F");
}
