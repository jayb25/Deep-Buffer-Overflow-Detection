#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 533;
   l = 68;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k/j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[96];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
