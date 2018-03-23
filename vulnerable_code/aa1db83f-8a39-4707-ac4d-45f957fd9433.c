#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = l-j;
   l = i-k;
   l = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[81];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
