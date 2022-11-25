#include<stdio.h>
int main(){

    long long int n, temp;

    scanf("%lld", &n);

    int  digitCount, r;
    temp = n;
    digitCount = 0;

    while( temp != 0){
        digitCount = digitCount + 1;
        temp = temp / 10;
    }

    printf ("%d digits", digitCount);

return 0;

}
