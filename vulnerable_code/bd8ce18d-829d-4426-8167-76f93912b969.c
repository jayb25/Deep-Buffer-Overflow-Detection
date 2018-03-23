#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = i/j;
   l = l-j;
   l = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[11];
    int c[93];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
