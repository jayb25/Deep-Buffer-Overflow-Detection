#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[30];
    int c[57];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
