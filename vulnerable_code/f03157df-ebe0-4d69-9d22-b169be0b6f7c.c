#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   k = i/j;
   l = j%j;
   l = i+i;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[85];
    int c[36];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
