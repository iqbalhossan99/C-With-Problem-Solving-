#include<stdio.h>
int main(){
    int num1, num2, n1, n2, rem, GCD, LCM;
    scanf("%d%d", &num1, &num2);
    n1 = num1;
    n2 = num2;
// q-7 and q-8
    while(n2!=0){
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    GCD = n1;
    printf("The GCD of  %d and %d is %d \n", num1, num2, GCD);

    LCM = (num1 * num2)/ GCD;

    printf("The LCM of  %d and %d is %d ", num1, num2, LCM);




return 0;
}
