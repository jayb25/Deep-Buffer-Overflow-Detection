#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=16;
   int k;
   int l;
   k = 543;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-2*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[22];
    char c[86];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
