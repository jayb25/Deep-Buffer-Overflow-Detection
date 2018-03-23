#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=184;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = j/j;
   l = l%j;
   l = l+j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[40];
    char c[99];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
