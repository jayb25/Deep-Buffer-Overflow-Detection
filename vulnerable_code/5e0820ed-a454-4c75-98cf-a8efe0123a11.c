#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1424;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   j = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[81];
    int c[51];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
