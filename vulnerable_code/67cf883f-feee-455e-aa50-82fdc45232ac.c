#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=42;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = j-j;
   l = 6+j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[98];
    int c[76];
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
