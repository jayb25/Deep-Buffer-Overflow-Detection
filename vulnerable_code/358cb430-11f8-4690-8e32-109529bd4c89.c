#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i%j;
   l = i%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[19];
    int c[27];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
