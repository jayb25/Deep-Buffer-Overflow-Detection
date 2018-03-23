#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   j = 53;
   l = 641;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i%j;
   l = i-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[88];
    char c[32];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
