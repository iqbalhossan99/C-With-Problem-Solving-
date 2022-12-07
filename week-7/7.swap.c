#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", arr+i);
    }

    swap(arr,n);
    return 0;
}

void swap(int arr[], int n)
{
    int* q,l,r;
     scanf("%d", &q);
    int* temp;
    for(int i=1; i<=q; i++)
    {
        scanf("%d", &l);
        scanf("%d", &r);

        temp = *(arr+l);

        *(arr+l) = *(arr+r);
        *(arr+r) = temp;
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d ", *(arr+i));
    }
}
