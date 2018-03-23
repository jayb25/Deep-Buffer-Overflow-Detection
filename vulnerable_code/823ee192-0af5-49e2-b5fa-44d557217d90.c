#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k%j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[18];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%dnn",k);
   return 0;
}
