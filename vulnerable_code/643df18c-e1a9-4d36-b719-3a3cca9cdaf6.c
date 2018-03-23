#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=131;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i/j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[28];
    char c[84];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
