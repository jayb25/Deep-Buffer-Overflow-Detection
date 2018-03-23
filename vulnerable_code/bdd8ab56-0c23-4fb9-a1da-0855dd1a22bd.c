#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[34];
    char c[17];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
