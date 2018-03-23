#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   k = 633;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = 6-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[52];
    int c[41];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
