#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = i%j;
   l = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[7];
    int c[15];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
