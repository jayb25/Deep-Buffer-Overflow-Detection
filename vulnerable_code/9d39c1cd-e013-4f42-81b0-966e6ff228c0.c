#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[11];
    int c[99];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
