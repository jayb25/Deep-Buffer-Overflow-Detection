#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k-j;
   l = i/j;
   l = i/j;
   l = l+j;
   l = k%j;
   i = l%j;
   l = l%j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[20];
    int c[78];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
