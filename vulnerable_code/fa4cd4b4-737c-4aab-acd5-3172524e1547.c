#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[51];
    char c[63];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
