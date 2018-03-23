#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=148;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[28];
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
