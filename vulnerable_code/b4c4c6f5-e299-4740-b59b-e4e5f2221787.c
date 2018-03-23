#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 538;
   l = 64;
   k = l/j;
   l = i/j;
   l = l = j;
   l = i%j;
   l = j-j;
   k = k-l*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[61];
    int c[28];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
