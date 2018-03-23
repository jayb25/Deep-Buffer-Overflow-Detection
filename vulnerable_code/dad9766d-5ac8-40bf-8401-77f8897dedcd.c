#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=141;
   int k;
   int l;
   j = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = j%j;
   l = j-j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[48];
    int c[84];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
