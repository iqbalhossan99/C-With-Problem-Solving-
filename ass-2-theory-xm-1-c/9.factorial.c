#include<stdio.h>
int main(){
    int n,i, fac;
    scanf("%d", &n);
     printf("The factors of %d are: ", n);
    for(i=n; i<=n; i--){
        if(n%i==0){
            fac = n/i;
            printf("%d, ", fac);
        }
    }


    return 0;
}
