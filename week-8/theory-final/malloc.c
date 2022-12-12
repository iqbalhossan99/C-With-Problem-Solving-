#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr;

    printf("Enter the array length: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter elements: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Output elements: ");
    for(int i=0; i<n;i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
