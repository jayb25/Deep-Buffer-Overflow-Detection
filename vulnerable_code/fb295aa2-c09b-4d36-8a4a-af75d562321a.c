#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i%j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[82];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
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
