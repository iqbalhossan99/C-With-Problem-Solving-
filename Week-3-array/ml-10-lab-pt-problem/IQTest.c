#include<stdio.h>
int main(){
    int  arr[105];
    int n, i;
    scanf("%d", &n);
    int  eco=0, oco=0;
    int ans;


    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=n; i++){
        if(arr[i]%2==0){
            eco++;
        }else{
            oco++;
        }
    }

    if(eco == 1){
        for(i=1; i<=n; i++){
            if(arr[i]%2 == 0)
                ans = i;
        }
    }else{
         for(i=1; i<=n; i++){
                if(arr[i]%2!= 0)
                    ans = i;
            }
    }
    printf("%d", ans);
return 0;
}
