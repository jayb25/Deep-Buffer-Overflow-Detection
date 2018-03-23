#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[9];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
