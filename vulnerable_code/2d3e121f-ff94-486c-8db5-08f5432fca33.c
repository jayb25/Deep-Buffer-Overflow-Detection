#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[35];
    int c[56];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
