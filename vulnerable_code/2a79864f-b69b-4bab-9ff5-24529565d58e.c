#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1122;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[47];
    int c[71];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
