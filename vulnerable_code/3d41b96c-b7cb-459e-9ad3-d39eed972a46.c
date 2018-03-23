#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=414;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j-j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[54];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
