#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=44;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   l = l%j;
   k = 6-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[58];
    char c[28];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
