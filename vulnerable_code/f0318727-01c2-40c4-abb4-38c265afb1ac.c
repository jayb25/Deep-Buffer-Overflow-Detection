#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=62;
   int k;
   int l;
   k = 53;
   l = 6;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[13];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
