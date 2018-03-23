#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = i-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[12];
    int c[98];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
