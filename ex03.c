#include <stdio.h>

int main(void) {
  int    i;
  int    j;
  
  i=1;
  while ( i<=10 ) {
        for ( j=1;  j<=i ;  j++ ) {
               printf("*");
        }
        printf("\n");
        i++;
   }
}
