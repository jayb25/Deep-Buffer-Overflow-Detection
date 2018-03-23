#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[44];
    long c[30];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
