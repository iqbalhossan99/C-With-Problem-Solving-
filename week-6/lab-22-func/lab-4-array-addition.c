#include<stdio.h>
int arr_Addition(int arr[], int arr_len)
{
    int i;
    int total = 0;
    for(i=0; i<arr_len; i++)
    {
        total  += arr[i];
    }

    return total;
}

int main()
{
    int arr[] = {13,12,14,5,6};

//    int arr_len = sizeof(arr); // it give unexpected arr size;
    printf("%d size of arr: ", arr_len);
    int sum = arr_Addition(arr, 5);

    printf("%d\n", sum);
    return 0;
}
