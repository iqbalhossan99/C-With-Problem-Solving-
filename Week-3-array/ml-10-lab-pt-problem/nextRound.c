

#include<stdio.h>
int main(){
    int n, i, k;
    scanf("%d %d", &n, &k);
    int arr[n], playarCount=0;

    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=n; i++){
            if(arr[i] >= arr[k] && arr[i]>0){
                    playarCount++;
            }
    }

    printf("%d", playarCount);


return 0;
}
