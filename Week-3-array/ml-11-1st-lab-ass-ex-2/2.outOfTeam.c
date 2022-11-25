
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N, K, i, outPlayer = 0;
  scanf("%d %d", &N, &K);
  int arr[N];

  for (i=1; i<=N; i++){
    scanf("%d", &arr[i] );
  }

  for(i=1; i<=N; i++){
//    printf("%d", arr[i]);
    if(arr[i] < K){
        outPlayer++;
    }
  }
  printf("%d", outPlayer);
    return 0;
}
