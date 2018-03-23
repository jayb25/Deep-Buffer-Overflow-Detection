#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 633;
   l = 9;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[50];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
