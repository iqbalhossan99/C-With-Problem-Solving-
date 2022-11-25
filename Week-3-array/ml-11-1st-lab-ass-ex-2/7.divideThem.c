

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int N, i,j;
    scanf("%d", &N);
    int arr[N];
    int Roll, K;
    for(i=0; i<N; i++){
          scanf("%d", &arr[i] );
//           printf("%d", arr[i]);
    }

    scanf("%d", &K);

    for(i=K; i<N; i++){
        printf("%d ", arr[i]);
    }
  printf("\n");
    for(i=0; i<K; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
