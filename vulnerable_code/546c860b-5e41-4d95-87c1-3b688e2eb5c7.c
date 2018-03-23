#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = j/j;
   l = j%j;
   l = l+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[30];
    int c[50];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
