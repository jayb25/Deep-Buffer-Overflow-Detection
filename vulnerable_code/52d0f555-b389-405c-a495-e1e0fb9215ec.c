#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[80];
    char c[5];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
