#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=101;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[28];
    char c[49];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
