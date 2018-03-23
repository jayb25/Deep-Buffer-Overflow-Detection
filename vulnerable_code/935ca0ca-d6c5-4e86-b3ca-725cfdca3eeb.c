#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l = i/j;
   k = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[54];
    char c[14];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,k);
   return 0;
}
