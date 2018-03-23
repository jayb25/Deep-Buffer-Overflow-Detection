#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1422;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = j%j;
   l = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[70];
    int c[86];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
