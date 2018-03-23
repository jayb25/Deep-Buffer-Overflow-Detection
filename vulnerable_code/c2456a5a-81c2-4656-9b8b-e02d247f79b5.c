#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=54;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i-j;
   k = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[49];
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
    
   printf("%d%de\n",k,l);
   return 0;
}
