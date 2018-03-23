#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i%j;
   l = l%j;
   l = l%j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[27];
    int c[40];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",l,l);
   return 0;
}
