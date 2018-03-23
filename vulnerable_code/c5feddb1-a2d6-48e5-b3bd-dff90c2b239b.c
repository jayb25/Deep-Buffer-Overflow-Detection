#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[41];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
