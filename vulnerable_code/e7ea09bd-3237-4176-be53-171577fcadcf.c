#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1121;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k%j;
   k = k-k*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[78];
    char c[40];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
