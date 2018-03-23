#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[41];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
