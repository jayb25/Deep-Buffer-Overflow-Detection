#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l-j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[6];
    int c[57];
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
    
   printf("%d%d\n",k,k);
   return 0;
}
