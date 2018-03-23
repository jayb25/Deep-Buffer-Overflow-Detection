#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=422;
   int k;
   int l;
   k = 583;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   l = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[20];
    int c[13];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
