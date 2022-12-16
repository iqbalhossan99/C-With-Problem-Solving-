#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];

    int halfLen = ceil(n/2);

    for(int i=0; i<n; i++)
    {
        scanf("%d", arr + i);
    }

    beautiful_Arr(n,halfLen, arr);

    return 0;
}

void beautiful_Arr(int n,int halfLen, int arr[])
{
    int temp, rem, count=0;
    for(int i=0; i<n; i++)
    {
        temp = *(arr + i);
        while(temp !=0)
        {
            rem = temp % 10;
            temp = temp / 10;

            if(rem == 7)
                count++;

        }
    }

    if(count>=halfLen)
        printf("Beautiful");
    else
        printf("Ugly");
}
