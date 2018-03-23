#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[74];
    char c[46];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
