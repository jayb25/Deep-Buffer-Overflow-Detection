#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[50];
    int c[52];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
