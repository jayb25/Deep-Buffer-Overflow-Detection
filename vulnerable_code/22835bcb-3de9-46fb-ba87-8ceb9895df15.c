#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 644;
   k = l/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[90];
    int c[41];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
