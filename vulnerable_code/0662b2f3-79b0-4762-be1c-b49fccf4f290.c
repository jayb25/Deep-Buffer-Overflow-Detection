#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 33;
   l = 69;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[53];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
