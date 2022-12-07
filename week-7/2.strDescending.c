#include<stdio.h>
int main()
{
    char arr[100];
    char newArr[100];
    fgets(arr, sizeof(arr), stdin);

    sort_Again(arr);
    return 0;
}

void sort_Again(char arr[])
{
    char temp;
    int len = strlen(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i] += 32;
        }
        for(int j=0; j<(len-1); j++)
        {
            if(arr[j] <= arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("%s", arr);
}
