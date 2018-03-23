#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 66;
   k = i/j;
   l = i%j;
   l = i+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[45];
    int c[46];
    a = 0;
    while (a < strlen(b)) {
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
