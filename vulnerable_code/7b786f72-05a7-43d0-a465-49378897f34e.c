#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[58];
    long c[35];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
