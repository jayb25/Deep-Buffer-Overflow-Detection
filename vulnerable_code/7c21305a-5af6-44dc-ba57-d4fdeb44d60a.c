#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1024;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[32];
    long c[78];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
