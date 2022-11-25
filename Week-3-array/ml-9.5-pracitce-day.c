#include<stdio.h>
int main()
{
    int N, i, arr[N];
    scanf("%d", &N);
    for(i = 1; i<=N; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 1; i<=N; i++){
        printf("%d\n", &arr[i]);
    }

    return 0;
}
