#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l-j;
   l = l-j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[65];
    int c[26];
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
