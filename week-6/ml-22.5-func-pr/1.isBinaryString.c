#include<stdio.h>
int is_BinaryString(char s[], int len);
int is_BinaryString(char s[], int len)
{
    int flag = 1;
     for(int i=0; i<len; i++)
    {
        if(s[i] != '0' || s[i] !='1')
           return flag = 0;
        else
            return flag =1;
    }
}

int main()
{
    char s[5];

    fgets(s, sizeof(s), stdin);

    int len = strlen(s);

    if(is_BinaryString(s, len))
    {
        printf("Yes\n");
    }else{
            printf("No\n");
    }


    return 0;
}
