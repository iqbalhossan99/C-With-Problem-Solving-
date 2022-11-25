#include<stdio.h>
int main(){

    int a = 10, b=20, c=30; //integer num
    c=b;
    float fl_num = 24.67; //float num
    double db_num = 34.5678953232; //double means display the more then 2 max 6 after decimal
    char ch = 'a'; //single character ( একটি বর্ন যেমন a, b, z, A, N ইত্যাদি) বুঝায়।

    //printf("Print all data: %d \n %f \n %f \n %c", a, fl_num, db_num, ch);
   // printf("Print all data: %d%d%d", a, b, c);
    printf("Print all data: %d0", a*c);
    return 0;
}
