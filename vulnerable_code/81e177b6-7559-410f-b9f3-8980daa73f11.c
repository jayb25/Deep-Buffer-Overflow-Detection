#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/3;
   l = i/j;
   l = l/j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[67];
    char c[6];
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
