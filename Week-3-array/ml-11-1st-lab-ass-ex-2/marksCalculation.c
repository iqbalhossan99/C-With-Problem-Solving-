#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i;
    scanf("%d", &N);
    int arr[N], maxNum, diffArr[N], diff;

    for(i=1; i<=N; i++){
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=N; i++){
            if(maxNum<arr[i])
            {
                maxNum = arr[i];
            }
        }



    for(i=1; i<=N; i++){
        if(arr[i]<=maxNum){
            diff = maxNum - arr[i];
            diffArr[i] = diff;
            printf("%d ", diffArr[i]);
        }
    }




    return 0;
}

