#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/i;
   l = i%j;
   l = i%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[27];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
