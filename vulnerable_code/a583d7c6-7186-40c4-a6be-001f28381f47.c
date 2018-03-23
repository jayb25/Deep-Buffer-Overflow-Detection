#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[80];
    int c[37];
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
