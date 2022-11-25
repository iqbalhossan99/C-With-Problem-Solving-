
#include<stdio.h>
int main(){

    long long int n, temp;
    scanf("%lld", &n );
    int  digitCount, r, sum;
    temp = n;
    sum = 0;

    while( temp != 0){
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;

    }
    printf ("sum: %d\n", sum);

    return 0;

}
