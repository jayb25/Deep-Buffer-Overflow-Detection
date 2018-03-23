#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=120;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = 6%j;
   l = l-j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[85];
    long c[81];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
