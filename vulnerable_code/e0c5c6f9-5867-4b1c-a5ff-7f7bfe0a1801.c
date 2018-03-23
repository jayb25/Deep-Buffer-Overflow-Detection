#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   k = l-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[6];
    int c[53];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
