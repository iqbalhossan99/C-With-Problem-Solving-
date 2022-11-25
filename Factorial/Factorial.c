#include<stdio.h>
int main()
{
    while(1){ // use for always open debug console
    int i, fact = 1, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    i = 1;
    while(i<=n){
        fact = fact * i;
        i++;
    }
    printf("%d \n", fact );
}
}
