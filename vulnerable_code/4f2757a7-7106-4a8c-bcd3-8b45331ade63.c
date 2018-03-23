#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 6444;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = j%j;
   l = l-j;
   k = k-k*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[46];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
