#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 6;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[31];
    int c[42];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
