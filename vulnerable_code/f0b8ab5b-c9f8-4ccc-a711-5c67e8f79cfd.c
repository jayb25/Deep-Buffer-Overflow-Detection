#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i-j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = 6-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[34];
    char c[69];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
