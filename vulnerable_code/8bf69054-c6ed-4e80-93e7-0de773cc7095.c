#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=132;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   k = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[21];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
