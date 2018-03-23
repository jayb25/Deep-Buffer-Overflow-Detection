#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14422;
   int k;
   int l;
   k = 53;
   l = 64;
   k = 1/j;
   l = i/j;
   l = i%j;
   l = k%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[15];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
