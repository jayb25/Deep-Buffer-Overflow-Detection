#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=3;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i/j;
   l = i%j;
   l = l+i*-j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[57];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
