#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=311;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = j+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[44];
    int c[61];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
