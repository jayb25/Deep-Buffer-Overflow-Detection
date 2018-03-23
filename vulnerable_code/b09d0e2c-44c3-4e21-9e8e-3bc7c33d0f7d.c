#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 6444;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = j%j;
   l = l-j;
   k = k-k*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[24];
    int c[91];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
