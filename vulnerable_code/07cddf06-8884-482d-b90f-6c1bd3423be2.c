#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[8];
    char c[58];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
