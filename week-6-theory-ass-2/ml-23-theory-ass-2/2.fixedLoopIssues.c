#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop\n");
//      There aren't write the loop increment for this reason it will not stop the loop. It will print the line for life time
        i++;
    }
    return 0;
}
