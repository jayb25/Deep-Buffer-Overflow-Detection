#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   k = 64;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[83];
    char c[96];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%dnn",i);
   return 0;
}
