#include<stdio.h>
int main()
{
    char arr[100];
    char newArr[100];
    fgets(arr, sizeof(arr), stdin);
    int len = strlen(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i] += 32;
            printf("%c", arr[i]);
        }
        else if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i] = arr[i] - 32;
            printf("%c", arr[i]);
        }
    }
    return 0;
}
