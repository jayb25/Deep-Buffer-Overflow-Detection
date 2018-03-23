#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   i = 53;
   l = 64;
   k = k+j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = l-j;
   l = j-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[68];
    char c[85];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
