#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=024;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l+j;
   l = l%j;
   l = j%j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[36];
    long c[86];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
