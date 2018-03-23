#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   l = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   i = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[16];
    long c[91];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
