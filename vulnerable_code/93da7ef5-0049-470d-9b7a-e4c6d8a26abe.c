#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = i-j;
   l = l%j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[78];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
