#include<stdio.h>
int main()
{
    // lowercase To uppercase character;
    char lower;
    char upper;
    printf("Enter any letter: ");
    scanf("%c", &lower); //a=97
//    printf("Your uppercase is: %c \n",  lower-32);
//    scanf("%c", &upper); //a=97
//    printf("Your lowercase is: %c",  upper+32);
    upper = toupper(lower);
    printf("uppercase letter = %c", upper);
}
