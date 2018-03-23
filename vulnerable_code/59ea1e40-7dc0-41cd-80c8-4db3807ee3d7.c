#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1201;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[79];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
