#include<stdio.h>
int main()
{
    char str[100];
    int n;

    fgets(str, sizeof(str), stdin);

    scanf("%d", &n);

    for(int i = 0; i<strlen(str)-1; i++)
    {
        if(str[i]>='v' && str[i]<='z')
        {
        str[i] -= 21;
        }
        else{
        str[i] += n;
        }

        printf("%c", str[i]);
    }
    return 0;
}
