#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=322;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   l = i%j;
   l = l%j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[45];
    int c[32];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
