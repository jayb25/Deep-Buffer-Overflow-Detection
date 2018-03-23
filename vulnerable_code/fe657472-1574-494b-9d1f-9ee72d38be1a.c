#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = k-j*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[26];
    char c[46];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
