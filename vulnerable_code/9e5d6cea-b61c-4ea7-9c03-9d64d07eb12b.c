#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i%j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[73];
    int c[33];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
