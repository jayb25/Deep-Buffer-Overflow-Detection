#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[74];
    int c[94];
    a = 0;
    do {
        //random
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
