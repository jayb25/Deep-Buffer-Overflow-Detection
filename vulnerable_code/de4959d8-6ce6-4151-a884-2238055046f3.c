#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k+j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[31];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
