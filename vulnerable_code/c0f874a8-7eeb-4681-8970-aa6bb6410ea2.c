#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = i%j;
   l = l/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[17];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
