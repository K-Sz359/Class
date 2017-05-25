#include <stdio.h>
int f( int x, int y ){
  return x*x+y*y;
}
int main(int argc, char const *argv[]) {
  printf("%d\n",f( 2 , 3 ));
}
