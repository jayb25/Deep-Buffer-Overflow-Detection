#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12444;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l+j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[10];
    long c[78];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
