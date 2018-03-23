#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   l = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[99];
    int c[68];
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
    //random
    
   printf("%d\n",k);
   return 0;
}
