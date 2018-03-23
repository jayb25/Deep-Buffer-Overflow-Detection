#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 13;
   l = 644;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[25];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
