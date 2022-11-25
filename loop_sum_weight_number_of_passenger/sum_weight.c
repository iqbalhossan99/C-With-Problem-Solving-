#include <stdio.h>
int main(){

  /*
     int n, w, i, sum;
    sum = 0;
    printf("Enter passenger numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &w);
        sum += w;
    }

    printf("Total weight of the passenger: %d", sum); */

    //chocolate 4pack = 1choco;

  /*  int n, choco,pack;

    scanf("%d", &n);
    choco = n;
    pack = n;

    while(pack >= 4){
        choco += (pack /4);
        pack = (pack/4) + (pack % 4);
    }
    printf("%d", choco); */

      int a=0,i=0;
    printf("4");
    for (i=0; i<5; i++)
    {
        a+=1;
        if (i==3)
            break;
    }
    printf("%d\n",a);
    return 0;

}
