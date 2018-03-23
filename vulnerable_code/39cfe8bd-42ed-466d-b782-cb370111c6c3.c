#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 53;
   l = 65;
   k = i/j;
   l = i%j;
   l = i/j;
   l = i%j;
   l = j+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[93];
    a = 0;
    while (a < strlen(b)) {
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
