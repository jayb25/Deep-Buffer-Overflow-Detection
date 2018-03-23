#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 63;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = l%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[55];
    char c[50];
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
