#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[54];
    long c[26];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
