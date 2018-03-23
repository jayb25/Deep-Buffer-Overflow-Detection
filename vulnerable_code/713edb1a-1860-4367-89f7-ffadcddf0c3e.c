#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=141;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = j/j;
   l = i/j;
   k = l-j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[54];
    int c[91];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
