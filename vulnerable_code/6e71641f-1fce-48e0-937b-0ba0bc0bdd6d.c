#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 56;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i/j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[16];
    int c[56];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
