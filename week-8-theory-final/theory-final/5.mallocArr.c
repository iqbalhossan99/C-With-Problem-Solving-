#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i, *ptr;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
  }

  printf("The out put elements are: ");
  for(i = 0; i < n; ++i) {
    printf("%d ", *(ptr + i));
  }

  // deallocating the memory
  free(ptr);

  return 0;
}
