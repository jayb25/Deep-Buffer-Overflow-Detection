#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[34];
    char c[56];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
