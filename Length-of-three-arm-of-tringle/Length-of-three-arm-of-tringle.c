#include<stdio.h>
int main()
{
    float a, b, c, s, area ;
    printf("Enter values: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("S is: %f \n", s);
    printf("Area is: %f \n ", area);

}
