#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1432;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[80];
    int c[54];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
