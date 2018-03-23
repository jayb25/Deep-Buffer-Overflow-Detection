#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[20];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
