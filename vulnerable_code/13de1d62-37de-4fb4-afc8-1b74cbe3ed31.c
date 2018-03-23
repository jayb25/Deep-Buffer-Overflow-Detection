#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   l = l%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[74];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",l,l);
   return 0;
}
