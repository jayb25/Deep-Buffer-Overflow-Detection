#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[40];
    int c[53];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
