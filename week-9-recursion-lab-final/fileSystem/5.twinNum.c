#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, s;
    scanf("%d%d", &n,&s);
    if(n%2 == 0 && s%2==0)
    {
        int substrNum, restNum;
        substrNum = s -n;
        restNum = substrNum/2;
        printf("%d", restNum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
