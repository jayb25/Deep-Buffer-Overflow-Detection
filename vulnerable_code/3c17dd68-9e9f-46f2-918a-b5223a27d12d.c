#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   k = 64;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[71];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%dnn",i);
   return 0;
}
