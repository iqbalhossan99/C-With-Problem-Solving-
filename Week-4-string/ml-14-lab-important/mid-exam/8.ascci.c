
#include < stdio.h >

int main() {
    char ch;

    // assigning a letter to ch
    printf("Enter the Character: ");
    scanf("%c", & ch);

    // displaying the ASCII value of the letter stored in ch
    printf("\nThe ASCII Value of %c is %d", ch, ch);

    return 0;
}
