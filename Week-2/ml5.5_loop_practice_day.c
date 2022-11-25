#include<stdio.h>
int main(){

    // problem 1 & 2
   /*
    int n, i;

    scanf("%d", &n);

    if(n>0){
        for(i = 1; n>=i; i++ ){

            printf("%d", n);
        }
    }
    else {
         for(i = 1; n<=i; i-- ){

            printf("%d", i);
        }
    }
    */

    // problem 3
/*
    int n, i;
    scanf("%d", &n);
    for(i =2; n>=i; i+=2){
        printf("%d", i);
    }

        */

    int n, m, i, d;
    scanf("%d %d", &n, &m);
     for(i =1; n>=i; i++){
            d = i * m;
            printf("%d", d);

            d > n;
            break;
      //   printf("%d", d);
    }
    return 0;
}
