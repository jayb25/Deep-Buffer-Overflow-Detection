#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=4;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[53];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
