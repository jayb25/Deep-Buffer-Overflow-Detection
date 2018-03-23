#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = j-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[39];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
