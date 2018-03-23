#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[40];
    char c[90];
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
