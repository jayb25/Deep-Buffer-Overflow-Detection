#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[95];
    int c[55];
    a = 0;
    while (a < strlen(b)) {
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
