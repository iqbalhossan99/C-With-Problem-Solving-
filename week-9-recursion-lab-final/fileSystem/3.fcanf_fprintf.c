#include<stdio.h>
int main()
{
    FILE * inputFile;
    FILE * outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        fprintf(outputFile, "Input file not found");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
//    fprintf(outputFile, "Summation is:%d, ", n);

    int sum = 0;
    for(int i=0; i<n;i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }
    fprintf(outputFile, "Summation is:%d, ", sum);
    return 0;
}
