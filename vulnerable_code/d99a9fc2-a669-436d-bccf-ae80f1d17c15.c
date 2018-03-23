#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l/j;
   l = k%j;
   l = i/j;
   l = l%j;
   l = l+(i-j);
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[31];
    char c[33];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
