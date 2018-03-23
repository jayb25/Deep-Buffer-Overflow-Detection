#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[38];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
