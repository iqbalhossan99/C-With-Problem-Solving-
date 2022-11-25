#include<stdio.h>
int main()
{
//    int arr[3]= {1,2,3},i,j;
//    for(i=0; i<3; i++)
//    {
//        for(j=i; j<3; j++)
//        {
//            printf("%d ",arr[j]);
//        }
//    }

// int i,j;
//    for(i=0;i<=5;i++)
//         printf("%d ",i);
//    {
//        for(j=0;j<=5;j++)
//        {
//            printf("%d ", i);
//
//        }
//    }
//
// char alphabets= {'A','B','C'};
//    printf("%c\n",alphabets[1]);

//int arr[5]= {0,-1+1,1+3,1,2};
//printf("%d", arr[1]);
//    return 0;
// char arr[2]= {'a','b'},i,j;
//    for(i=0; i<2; i++)
//    {
//        for(j=0; j<2; j++)
//        {
//            printf("%c",arr[j]);
//        }
//        char ch=arr[0];
//        arr[0]=arr[1];
//        arr[1]=ch;
//    }
//    return 0;


 int arr[5]= {1,2,3,4,5},i=5,j;
    while(i>=1)
    {
        arr[i-1]-=i;
        while(1)
        {
            arr[i-1]+=i;
            break;
        }
        i-=1;
    }
    for(j=0; j<5; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
