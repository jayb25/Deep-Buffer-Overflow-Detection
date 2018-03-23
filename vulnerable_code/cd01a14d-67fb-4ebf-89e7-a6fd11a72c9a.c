#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1422;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l+j;
   l = l-i*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[89];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
