#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l-j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[55];
    int c[62];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
