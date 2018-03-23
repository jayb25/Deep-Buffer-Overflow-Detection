#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = k%j;
   l = l-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[49];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
