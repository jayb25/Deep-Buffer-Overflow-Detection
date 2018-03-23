#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   k = 53;
   l = 6;
   k = 6/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   l = l-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[41];
    int c[39];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
