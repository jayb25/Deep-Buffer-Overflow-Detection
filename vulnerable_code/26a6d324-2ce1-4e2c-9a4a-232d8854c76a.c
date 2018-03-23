#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=145;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[27];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
