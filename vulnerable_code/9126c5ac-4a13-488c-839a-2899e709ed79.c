#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i/j;
   l = i+j;
   l = l/j;
   j = 6-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[54];
    int c[39];
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
