#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[55];
    char c[13];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
