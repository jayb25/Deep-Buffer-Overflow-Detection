#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1024;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[27];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
