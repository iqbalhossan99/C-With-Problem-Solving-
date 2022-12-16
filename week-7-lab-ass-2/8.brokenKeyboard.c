#include<stdio.h>
int main()
{
    char strArr[100];

    fgets(strArr, sizeof(strArr), stdin);

    broken_Keyboard(strArr);

    return 0;
}

void broken_Keyboard(char strArr[])
{
    int len = strlen(strArr);

    for(int i=0; i<len; i++)
    {

        if(i==0)
        {
            printf("%c", strArr[i]);
        }
        else if(i==1)
        {
            printf("%c", strArr[i]);
            printf("%c", strArr[i]);
        }
        else if(i==2)
        {
            printf("%c", strArr[i]);
        }
        else if(i==3)
        {
            printf("%c", strArr[i]);
            printf("%c", strArr[i]);
        }else
        printf("%c", strArr[i]);
    }
}
