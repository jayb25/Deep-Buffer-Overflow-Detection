#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = i%j;
   l = l%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[8];
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
