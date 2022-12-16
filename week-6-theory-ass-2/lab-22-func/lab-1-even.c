
 #include<stdio.h>
// void find_parity(int x);
//  void find_parity(int x)
// {
//     if(x%2==0)
//        printf("This is even number: %d", x);
//    else
//        printf("This is odd number: %d", x);
//
//        return;
// }

int is_Even(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;

}
 int main()
 {
     int n;

     scanf("%d", &n);

     if(is_Even(n))
        printf("Even\n");
     else
        printf("Odd\n");

     return 0;

 }
