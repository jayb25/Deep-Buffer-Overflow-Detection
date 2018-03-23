#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k/j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[51];
    a = 0;
    while (b[a] != 0) {
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
