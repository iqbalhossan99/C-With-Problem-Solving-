#include<stdio.h>
int main(){
    int arr[200000];
    int n,i,x;
    scanf("%d", &n);

    for(i=1; i<n; i++){
        scanf("%d", &x);
        arr[x] = 1;
    }

    for(i=1; i<=n; i++){
        if(arr[i] == 0){
            printf("%d\n ", i);
        }
    }

return 0;
}
