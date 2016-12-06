#include <stdio.h>

void main() {
  int arr[] = {1,2,3,4};
  int *p[4];
  int i;
  for (i=0; i<4;i++) {
    *(p+i) = &arr[i];
  }
  while (getchar()!='\n');
}
