#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   j = 33;
   l = 66;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i/j;
   l = i-j;
   l = l-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[30];
    long c[7];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
