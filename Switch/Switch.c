#include<stdio.h>
int main(){
    int choice;
    float temp ,convertCelToFah, convertFahToCel;
    printf("Enter a choice number: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
           {
                printf("Enter a celcius number:    ");
                scanf("%f", &temp);
                convertCelToFah = (temp - 32)*1.8;
                printf("Display the fahren:  %f", convertCelToFah);
           }
        break;
        case 2:
            {
                printf("Enter a fahrenheit number ");
                scanf("%f", &temp);
                convertFahToCel = (temp *1.8)+32;
                printf("Display the cel:  %f", convertFahToCel);
            }

    };
}
