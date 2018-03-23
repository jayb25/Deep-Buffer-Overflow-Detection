#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=148;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = 0/j;
   l = i%j;
   l = i+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[58];
    int c[67];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
