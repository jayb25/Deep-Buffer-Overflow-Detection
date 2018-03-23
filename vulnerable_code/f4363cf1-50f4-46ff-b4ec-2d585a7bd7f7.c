#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   j = 543;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = i%j;
   l = l+j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[81];
    int c[51];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
