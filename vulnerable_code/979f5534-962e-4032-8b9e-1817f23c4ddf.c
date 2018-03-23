#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = --j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[6];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
