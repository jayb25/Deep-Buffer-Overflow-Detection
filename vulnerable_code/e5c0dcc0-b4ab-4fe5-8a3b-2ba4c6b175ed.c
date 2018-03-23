#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i%j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l%j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[89];
    int c[71];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
