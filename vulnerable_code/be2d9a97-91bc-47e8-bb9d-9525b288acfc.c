#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = k-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[88];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
