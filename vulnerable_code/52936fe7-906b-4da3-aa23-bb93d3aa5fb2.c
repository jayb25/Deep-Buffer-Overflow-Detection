#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[48];
    int c[70];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
