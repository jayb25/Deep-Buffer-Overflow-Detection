#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   k = j/j;
   l = i%j;
   l = l-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[88];
    char c[72];
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
