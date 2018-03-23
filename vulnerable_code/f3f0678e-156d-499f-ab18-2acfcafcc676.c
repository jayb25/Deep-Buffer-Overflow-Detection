#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1228;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[54];
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
