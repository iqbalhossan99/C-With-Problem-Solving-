#include<stdio.h>
int main(){

    char name[20] ;

//scanf("%s", name); // It's doesn't allow any space (like if we scan 'iqbal hossan')
// it will print only iqbal
// So don't use scanf for scan any string, use fgets
//printf("Name is: %s", name); // use puts() method instead of printf

    fgets(name, sizeof(name), stdin);

    puts(name);

}
