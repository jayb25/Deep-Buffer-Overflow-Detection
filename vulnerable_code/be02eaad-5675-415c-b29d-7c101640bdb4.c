#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[41];
    long c[34];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
