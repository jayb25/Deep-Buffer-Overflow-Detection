#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = l%j;
   l = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[18];
    int c[21];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
