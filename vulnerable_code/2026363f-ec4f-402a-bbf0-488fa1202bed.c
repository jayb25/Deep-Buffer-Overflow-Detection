#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k%j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[19];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%dnn",k);
   return 0;
}
