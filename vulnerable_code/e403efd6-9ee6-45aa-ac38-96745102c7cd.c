#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   k = i-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[26];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
