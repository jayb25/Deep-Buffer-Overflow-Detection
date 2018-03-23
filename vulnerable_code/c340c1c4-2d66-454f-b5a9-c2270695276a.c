#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k/j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[17];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
