#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[73];
    int c[37];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
