#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = k%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[34];
    int c[18];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
