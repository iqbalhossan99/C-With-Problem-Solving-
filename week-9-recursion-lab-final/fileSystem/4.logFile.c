#include<stdio.h>
int main()
{
    FILE * inputFile;
    FILE * logFile;
    FILE * outputFile;

    inputFile = fopen("input2.txt", "r");
    outputFile = fopen("output.txt", "w");
    logFile = fopen("log.txt", "a");
    if(inputFile == NULL)
    {
        fprintf(logFile, "Input file not found at 5:30 PM\n"); // if our software unfortunately crashed then we take a note that when it occurred.
        return 0;
    }

    fclose(inputFile);
    fclose(outputFile);
    fclose(logFile);
    return 0;
}
