#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = k%j;
   l = l-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[25];
    int c[15];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
