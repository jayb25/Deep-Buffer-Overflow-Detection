#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[49];
    int c[47];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
