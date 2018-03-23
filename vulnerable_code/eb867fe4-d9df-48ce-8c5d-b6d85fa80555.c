#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   l = 33;
   l = 64;
   k = i/j;
   l = i%j;
   l = j%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[12];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
