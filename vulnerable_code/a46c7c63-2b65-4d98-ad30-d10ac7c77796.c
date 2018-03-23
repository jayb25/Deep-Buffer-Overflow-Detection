#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 66;
   k = i%j;
   l = i/j;
   l = i%j;
   l = i/j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[33];
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
