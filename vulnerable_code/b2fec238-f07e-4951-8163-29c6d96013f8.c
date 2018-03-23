#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=324;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = -k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[15];
    int c[68];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
