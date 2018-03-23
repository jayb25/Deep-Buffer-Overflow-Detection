#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = j%7;
   l = l+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[31];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
