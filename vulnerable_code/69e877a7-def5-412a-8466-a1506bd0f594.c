#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   i = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = j%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[70];
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
