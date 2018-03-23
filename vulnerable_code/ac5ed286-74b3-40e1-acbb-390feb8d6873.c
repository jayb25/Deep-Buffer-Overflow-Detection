#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = l%j;
   l = i%j;
   l = i%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[69];
    int c[94];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
