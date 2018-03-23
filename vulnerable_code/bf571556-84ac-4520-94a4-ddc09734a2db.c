#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[28];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
