#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 553;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[59];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
