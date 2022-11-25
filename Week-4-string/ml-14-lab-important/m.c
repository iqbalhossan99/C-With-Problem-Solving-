
#include<stdio.h>
int main(){
    int i, j, temp,x,y;
    int arr[3][3 ];

    for(i=0;i<3; i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    int row, col, ans;

    if(x>2){
        row = x-2;
    }else{
        row = 2 - x;
    }

    if(y>2){
        col = y - 2;
    }else{
        col = 2 - y;
    }
     ans = row - col;

//    for(i=0;i<3; i++){
//        for(j=0;j<3;j++){
//            printf("%d ", arr[i][j]);
//        }
//            printf("\n");
//
//    }
    printf("%d", ans);
    return 0;
}

