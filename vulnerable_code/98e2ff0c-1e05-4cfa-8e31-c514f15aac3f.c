#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   l = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = i%j;
   l = i%j;
   l = l-j;
   j = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[61];
    int c[88];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
