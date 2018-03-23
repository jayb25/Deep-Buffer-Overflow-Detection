#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=121;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[54];
    int c[78];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   ;
   return 0;
}
