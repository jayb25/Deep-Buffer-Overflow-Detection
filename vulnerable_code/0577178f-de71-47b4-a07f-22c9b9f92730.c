#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = i+j;
   k = k-j*i;
   k = i/j;
   l = i%j;
   l = l-j;
   l = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[23];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
