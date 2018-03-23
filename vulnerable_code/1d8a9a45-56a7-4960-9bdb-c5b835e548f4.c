#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[74];
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
