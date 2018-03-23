#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i-j;
   l = i/j;
   l = k%j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[44];
    char c[12];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
