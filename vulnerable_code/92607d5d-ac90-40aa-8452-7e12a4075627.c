#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 532;
   l = 64;
   l = i/j;
   l = l/j;
   l = 6%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[67];
    char c[54];
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
