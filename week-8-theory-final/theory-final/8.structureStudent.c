#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct student s1;

    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number:");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);

    printf("Displaying Information:\n");

    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %d\n", s1.marks);

    return 0;
}
