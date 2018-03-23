#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i-j;
   l = l/j;
   l = i/j;
   l = l-j;
   l = l-j*l;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[50];
    char c[84];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
