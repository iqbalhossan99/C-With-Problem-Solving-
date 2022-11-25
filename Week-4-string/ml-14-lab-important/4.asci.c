#include<stdio.h>
int main()
{
    char a[10];
    a[0] = 98;
    int st1 = a[0];
    int st2 = a[1];
    a[0] = st1;
    a[1] = st2;
    a[1] = 97;
    a[2] = 'n';
    a[3] = 'a';
    a[4] = 'n';
    a[5] = 'a';
    a[6] = '\0';

    for(int i= 0; i<10; i++){
        printf("%c", a[i]);
    }

}
