#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i%j;
   l = i%j;
   l = l/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[68];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
