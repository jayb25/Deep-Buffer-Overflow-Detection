#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=414;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   l = i-j;
   k = 6-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[26];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
