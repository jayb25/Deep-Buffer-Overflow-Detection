#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   k = i%j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = l+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[30];
    int c[94];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
