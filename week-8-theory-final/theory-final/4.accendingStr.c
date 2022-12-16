#include<stdio.h>
int main()
{
    int strArr[50], fStrArr[50], i,j,c,n;
    scanf("%d", &n);
    strArr[n], fStrArr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &strArr[i]);
        fStrArr[i] =-1;
    }


    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
          if(strArr[i] == strArr[j])
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

     for(i=1;i<n;i++)
        {
          if(fStrArr[i] !=0)
                {
                   for(j=0; j<fStrArr[i]; j++)
                   {
                        printf("%d ", strArr[i]);
                   }
                }
        }

        getch();
    return 0;
}
