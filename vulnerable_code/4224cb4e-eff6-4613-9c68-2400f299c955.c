#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[11];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
