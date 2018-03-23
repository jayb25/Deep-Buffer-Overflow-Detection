#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1248;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = j/j;
   l = i%j;
   l = l+j;
   j = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[16];
    char c[65];
    a = 0;
    do {
        //random
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
