#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=31;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[37];
    char c[34];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
