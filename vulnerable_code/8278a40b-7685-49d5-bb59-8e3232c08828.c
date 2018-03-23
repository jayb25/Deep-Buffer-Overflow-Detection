#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=141;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = j/j;
   l = i/j;
   k = l-j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[36];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
