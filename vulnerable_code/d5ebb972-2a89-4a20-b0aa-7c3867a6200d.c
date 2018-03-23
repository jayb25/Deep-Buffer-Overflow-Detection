#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i%j;
   l = i/j;
   j = i%j;
   l = i+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[56];
    char c[65];
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
