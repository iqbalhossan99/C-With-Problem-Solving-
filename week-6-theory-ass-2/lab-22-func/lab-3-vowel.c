#include<stdio.h>
int is_Vowel(char ch);
int is_Vowel(char ch)
{
    char cch;

    if(ch >= 'A' && ch <= 'Z')
        cch = ch+32;
    else
        cch = ch;

    if(cch=='a' || cch=='e' || cch=='i' || cch=='o' || cch=='u')
        return 1;
    return 0;

}

int main()
{
    char ch;
    ch = getchar();
    getchar;

    if(is_Vowel(ch))
        printf("This is vowel: %c", ch);
    else
        printf("This is consonant: %c", ch);
}
