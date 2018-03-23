#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 14;
   k = i/j;
   l = i%j;
   l = l/j;
   k = l-j;
   l = l+j;
   l = k+j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[87];
    long c[55];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
