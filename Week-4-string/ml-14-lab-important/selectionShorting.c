#include<stdio.h>
int main()
{
    int N=8;
    int i, j;

    int arr[8] = {2, 45, 5,90,8,34,10,25};
    int shorted_arr[8];
    int min, m_ind;
    for(j=0; j<N; j++)
    {
        min = arr[0];
        m_ind = 0;
        for(i=0; i<N; i++)
        {
            if(arr[i]< min)
            {
                min = arr[i];
                m_ind = i;
            }
        }
        shorted_arr[j] = min;
        arr[m_ind] = 9999;
//        for(i=0; i<N; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
    }

    for(i=0; i<N; i++)
    {
        printf("%d ", shorted_arr[i]);
    }
    printf("\n");
    return 0;
}
