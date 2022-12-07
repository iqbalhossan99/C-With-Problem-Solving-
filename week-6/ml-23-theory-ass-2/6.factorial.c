#include<stdio.h>

int fact(int a)

{
    int m=1;

    for(int i=1; i<=a; i++)
    {
        m*=i;
    }
    return m;
}


int ratio_func(int x,int y)

{

    int fact_Of_x=fact(x);
    int fact_Of_y=fact(y);

    if(fact_Of_x>fact_Of_y)
    {
        int ratio=fact_Of_x/fact_Of_y;
        return ratio;
    }
    else
    {
        int ratio=fact_Of_y/fact_Of_x;
        return ratio;
    }

}


int main()

{

    int x,y;

    scanf("%d%d",&x,&y);

    int ratio=ratio_func(x,y);

    printf("The ratio is: %d\n",ratio);

    return 0;

}
