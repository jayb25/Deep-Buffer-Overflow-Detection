#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 538;
   l = 66;
   k = i/j;
   l = l/j;
   l = l/j;
   k = l-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[79];
    long c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
