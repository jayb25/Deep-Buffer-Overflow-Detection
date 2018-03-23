#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=04;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[56];
    int c[96];
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
