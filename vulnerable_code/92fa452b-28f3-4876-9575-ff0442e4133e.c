#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=022;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[25];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
