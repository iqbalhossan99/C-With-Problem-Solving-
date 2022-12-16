#include<stdio.h>
int main()
{
    FILE * inputFile;
    FILE * outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output1.txt", "w");
//    char ch = fgetc(inputFile);
//    printf("%c\n", ch); // here print the 1st character
//    char ch2 = fgetc(inputFile);
//    printf("%c\n", ch2); // here print the 2st character because of fgetc get down flow

if(inputFile == NULL)
{
     printf("No file found\n");
     return 0;
}
while(1)
{
    char ch = fgetc(inputFile);
    if(ch==EOF)
    {
        break;
    }
    fputc(ch, outputFile);
    printf("%c", ch);
}

    return 0;
}
