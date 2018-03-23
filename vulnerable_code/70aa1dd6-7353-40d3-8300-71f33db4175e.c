#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1<2;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = l/j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[86];
    long c[78];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%dnn",l);
   return 0;
}
