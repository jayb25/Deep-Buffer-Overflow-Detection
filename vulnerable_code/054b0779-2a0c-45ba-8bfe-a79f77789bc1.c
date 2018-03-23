#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = k%j;
   l = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[94];
    char c[34];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
