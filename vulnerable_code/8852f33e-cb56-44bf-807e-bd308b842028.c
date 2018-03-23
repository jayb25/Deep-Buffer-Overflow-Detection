#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[45];
    int c[52];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
