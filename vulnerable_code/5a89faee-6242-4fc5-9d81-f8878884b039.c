#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[44];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
