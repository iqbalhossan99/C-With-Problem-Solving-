
#include<stdio.h>
int main()
{
    int geoArr[15] ;
    geoArr[0] = 1;
    geoArr[1] = 2;

    for(int i =2; i<15; i++)
    {
        geoArr[i] = geoArr[i-1] * 2;
    }

    for (int i=0; i<15; i++)
    {
        printf("%d ", geoArr[i]);
    }
    return 0;
}
