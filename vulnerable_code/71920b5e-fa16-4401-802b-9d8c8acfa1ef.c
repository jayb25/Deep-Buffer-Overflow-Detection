#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 538;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[65];
    int c[92];
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
