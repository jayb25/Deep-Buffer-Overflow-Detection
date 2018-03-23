#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   k = i/j;
   k = i/j;
   l = j/j;
   l = l%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[29];
    long c[16];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
