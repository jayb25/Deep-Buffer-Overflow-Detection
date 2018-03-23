#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 532;
   l = 64;
   k = l/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[89];
    char c[21];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
