#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i+j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[81];
    char c[81];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
