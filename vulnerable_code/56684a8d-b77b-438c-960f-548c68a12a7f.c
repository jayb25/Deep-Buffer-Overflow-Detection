#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[89];
    long c[41];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
