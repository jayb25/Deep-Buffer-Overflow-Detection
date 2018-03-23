#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[65];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
