#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=121;
   int k;
   int l;
   j = 53;
   l = 64;
   k = l%j;
   l = i%j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[43];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
