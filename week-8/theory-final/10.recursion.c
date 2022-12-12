#include<stdio.h>

int recursivefibonacci(int);

int main()
{

    int m, i;

    printf("Enter the total number of values you want in the Fibonacci series : \n");

    scanf("%d",&m);

    printf("The Fibonacci series of these numbers would be equal to : \n");

    for(i=0; i<m; i++)
    {

        printf("%d ",recursivefibonacci(i));

    }

    getch();

}

int recursivefibonacci(int i)
{

    if(i==0) return 0;

    else if(i==1) return 1;

    else return (recursivefibonacci(i-1) + recursivefibonacci(i-2));

}
