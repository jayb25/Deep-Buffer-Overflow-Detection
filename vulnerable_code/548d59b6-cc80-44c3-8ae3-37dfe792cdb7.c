#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=422;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = j-j;
   j = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[18];
    int c[72];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
