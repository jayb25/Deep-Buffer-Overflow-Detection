#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[69];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
