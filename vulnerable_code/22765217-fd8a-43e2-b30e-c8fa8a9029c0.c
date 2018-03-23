#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   k = l%j;
   k = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[56];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
