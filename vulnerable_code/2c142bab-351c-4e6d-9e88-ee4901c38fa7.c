#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[77];
    char c[44];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
