#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=328;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j-j;
   l = j%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[62];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
