#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[83];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
