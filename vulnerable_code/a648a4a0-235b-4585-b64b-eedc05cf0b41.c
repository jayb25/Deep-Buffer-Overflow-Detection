#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[18];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
