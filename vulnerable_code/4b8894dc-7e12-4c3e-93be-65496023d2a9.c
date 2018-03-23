#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[12];
    int c[70];
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
