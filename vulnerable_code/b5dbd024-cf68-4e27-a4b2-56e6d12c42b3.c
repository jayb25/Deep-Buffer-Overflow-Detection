#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=13;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
    char c[67];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
