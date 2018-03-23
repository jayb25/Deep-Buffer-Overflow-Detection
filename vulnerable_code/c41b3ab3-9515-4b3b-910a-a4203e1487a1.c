#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l-j;
   l = k-l*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[44];
    long c[70];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
