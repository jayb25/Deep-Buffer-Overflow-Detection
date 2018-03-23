#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = j/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[67];
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
