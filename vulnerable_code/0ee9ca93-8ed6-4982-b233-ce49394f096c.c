#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=344;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   k = l-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[57];
    char c[36];
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
