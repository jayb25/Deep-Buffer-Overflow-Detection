#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l%j;
   l = l%j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[60];
    int c[95];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
