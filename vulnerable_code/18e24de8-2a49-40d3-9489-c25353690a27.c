#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-k*i;
   i = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[81];
    char c[18];
    a = 0;
    while (b[a] != 0) {
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
