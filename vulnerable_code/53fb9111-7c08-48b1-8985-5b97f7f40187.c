#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i%j;
   l = i%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[77];
    int c[85];
    a = 0;
    do {
        //random
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
