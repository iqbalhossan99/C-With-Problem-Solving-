#include<stdio.h>
int main(){

    int n, m;
    printf("Enter the first number: ");
    scanf(" %d", &n);
    printf("Enter the second number: " );
    scanf(" %d", &m);


    if(m % n == 0)
            printf("The second number is divisible by the first number.");
    else
            printf("None of them are divisible by the other.");


//    if(m>n){
//         for(i=1; i<=m; i++){
//            if(n*i<=m){
//                printf("%d ", n*i);
//            }
//        }
//    }
//    else{
//           for(i=1; i<=n; i++){
//            if(m*i<=n){
//                printf("%d ",m*i);
//            }
//        }
//    }
//
    return 0;
}
