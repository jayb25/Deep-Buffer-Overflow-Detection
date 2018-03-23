#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=44;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l-j;
   j = k-4*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[58];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
