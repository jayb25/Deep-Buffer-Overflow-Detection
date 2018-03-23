#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l-j;
   l = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[16];
    int c[35];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
