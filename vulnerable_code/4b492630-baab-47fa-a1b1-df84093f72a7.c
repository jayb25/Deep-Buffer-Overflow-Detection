#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i%j;
   l = i%j;
   l = i%j;
   l = i%j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[63];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
