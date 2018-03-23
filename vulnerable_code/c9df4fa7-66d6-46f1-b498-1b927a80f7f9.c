#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 63;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[50];
    int c[28];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
