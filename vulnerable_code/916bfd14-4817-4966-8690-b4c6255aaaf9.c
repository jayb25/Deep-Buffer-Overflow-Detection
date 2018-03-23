#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 54;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = l%j;
   l = l%j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[10];
    int c[54];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
