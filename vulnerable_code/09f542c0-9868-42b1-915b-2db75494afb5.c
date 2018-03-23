#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[40];
    int c[66];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
