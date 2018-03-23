#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = -j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[10];
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
