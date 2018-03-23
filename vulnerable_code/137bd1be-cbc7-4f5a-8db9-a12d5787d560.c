#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   k = 55;
   l = 54;
   k = i/j;
   l = i%j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[52];
    int c[97];
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
