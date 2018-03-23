#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1222;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   j = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[24];
    char c[39];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
