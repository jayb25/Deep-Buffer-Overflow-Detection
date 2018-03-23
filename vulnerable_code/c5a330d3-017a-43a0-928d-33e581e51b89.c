#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[83];
    int c[89];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
