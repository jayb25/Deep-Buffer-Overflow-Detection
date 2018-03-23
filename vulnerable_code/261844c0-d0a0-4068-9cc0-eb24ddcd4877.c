#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=16;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   j = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[20];
    int c[35];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
