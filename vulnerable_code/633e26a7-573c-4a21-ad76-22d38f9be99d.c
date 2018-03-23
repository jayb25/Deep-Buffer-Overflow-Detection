#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[55];
    long c[18];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
