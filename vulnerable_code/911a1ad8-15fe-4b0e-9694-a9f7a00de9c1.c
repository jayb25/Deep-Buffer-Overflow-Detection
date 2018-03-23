#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1121;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k%j;
   k = k-k*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[40];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
