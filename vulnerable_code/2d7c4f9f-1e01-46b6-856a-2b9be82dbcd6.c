#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=41;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[36];
    char c[90];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
