#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=134;
   int k;
   int l;
   j = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[54];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,k);
   return 0;
}
