#include <stdio.h>
#include <string.h>
int stringdunction(char a[]);
int removeDuplicateValue(char a[]);
int findParticularChar(char a[]);

int main()
{
    char a[1000];
    scanf("%s", &a);
    numString(a);
    return 0;
}

int numString(char a[])
{
    removeDuplicateValue(a);
    findParticularChar(a);
}

int removeDuplicateValue(char a[])
{
    int len = strlen(a);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] == a[j])
            {
                a[i] = '0';
            }
        }
    }
}

int findParticularChar(char a[])
{
    int len = strlen(a);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '9' || a[i] == '7' || a[i] == '1')
        {
            count++;
        }
    }

    if (count == 3)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
}
