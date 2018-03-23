#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = j/j;
   l = i/j;
   l = j%j;
   l = j%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[60];
    int c[33];
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
