#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[35];
    char c[25];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
