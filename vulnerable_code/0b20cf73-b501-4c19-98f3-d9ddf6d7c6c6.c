#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 14;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[79];
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
