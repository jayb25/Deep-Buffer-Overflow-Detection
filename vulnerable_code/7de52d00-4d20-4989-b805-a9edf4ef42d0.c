#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = l/j;
   l = j%j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[26];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
