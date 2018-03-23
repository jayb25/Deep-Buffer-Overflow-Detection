#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = j-j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[78];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
