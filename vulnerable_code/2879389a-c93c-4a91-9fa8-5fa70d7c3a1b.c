#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-i;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[78];
    char c[97];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
