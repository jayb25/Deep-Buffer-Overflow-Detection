#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1282;
   int k;
   int l;
   j = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[35];
    long c[82];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
