#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   k = j-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[83];
    char c[92];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
