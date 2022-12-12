#include<stdio.h>
int main()
{
    int c, n,i,j;
    char arr[100];
    char fStrArr[100];
    fgets(arr, sizeof(arr), stdin);

    for(i=0; i<n; i++)
    {
        fStrArr[i] =-1;
    }

    char temp;
    int len = strlen(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i] += 32;
        }
        c=1;
        for(int j=i+1; j<len; j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
                fStrArr[j] = 0;
            }
        }
        if(fStrArr[i] !=0)
        {
            fStrArr[i] = c;
        }
    }

    for(i=1; i<n; i++)
    {
        if(fStrArr[i] !=0)
        {
            for(int k =0; k<n-1; k++)
            {

                if(arr[i]>arr[i+1])
                {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1]= temp;
                }

                for(j=0; j<fStrArr[i]; j++)
                {


                    printf("%c", arr[i]);

//                printf("%c", arr[i]);
                }
            }
        }
    }

    return 0;
}


