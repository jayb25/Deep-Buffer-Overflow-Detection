#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 63;
   l = i/j;
   l = i/j;
   l = i/j;
   j = i%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[34];
    char c[65];
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
