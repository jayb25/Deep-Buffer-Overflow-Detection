#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=124;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[27];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,k);
   return 0;
}
