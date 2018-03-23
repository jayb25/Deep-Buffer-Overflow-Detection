#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   j = 33;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = i/j;
   l = k/j;
   l = i-j;
   l = i%j;
   l = j-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[50];
    int c[49];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
