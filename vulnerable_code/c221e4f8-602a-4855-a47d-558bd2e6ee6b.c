#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i%j;
   l = i/j;
   l = j%j;
   l = k+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[88];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
