#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = j+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[90];
    int c[94];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
