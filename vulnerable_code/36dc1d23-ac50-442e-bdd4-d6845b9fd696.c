#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[20];
    long c[77];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
