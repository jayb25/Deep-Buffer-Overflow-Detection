#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[22];
    int c[51];
    a = 0;
    while (a < strlen(b)) {
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
