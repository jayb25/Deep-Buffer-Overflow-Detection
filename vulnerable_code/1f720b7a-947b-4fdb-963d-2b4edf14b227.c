#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1144;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = j/j;
   l = l%j;
   l = l-j;
   l = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[42];
    int c[41];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",i,l);
   return 0;
}
