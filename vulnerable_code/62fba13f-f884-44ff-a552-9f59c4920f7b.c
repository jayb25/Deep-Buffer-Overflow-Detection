#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1224;
   int k;
   int l;
   k = 533;
   l = 64;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = j-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[69];
    int c[72];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
