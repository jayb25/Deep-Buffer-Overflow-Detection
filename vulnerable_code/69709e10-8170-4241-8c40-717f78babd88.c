#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i-j;
   l = i/j;
   l = k%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[32];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
