#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   k = 54;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l+3;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[71];
    char c[24];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
