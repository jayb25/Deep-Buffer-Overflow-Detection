#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i/j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[52];
    int c[25];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
