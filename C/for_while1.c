#include <stdio.h>
int main(int argc, char const *argv[]) {
  int x,i;
  scanf("%d",&x);
  i=0;
  while ( i < x ) {
    printf("#");
    i++ ;
  }
  printf("\n");
  for ( i = 0 ; i < x ; i++ ) {
    printf("#");
  }
  printf("\n");
  return 0;
}
